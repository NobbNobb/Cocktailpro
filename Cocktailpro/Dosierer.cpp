/**
 * @(#) Dosierer.cpp
 */


#include "Dosierer.h"
#include <iostream>

Dosierer::Dosierer(){
    
}

Dosierer::Dosierer(string zutat, bool typ){
    Zutat = zutat;
    Typ = typ;
    Zustand = false;
    Durchfluss = 0;
}

Dosierer::~Dosierer(){
    
}
/**
 * 
 * */
std::string Dosierer::getZutat() const
{
	return Zutat;
}

/**
 * 
 */
void Dosierer::update()
{
    subject->showGewicht();
    if(subject->getDeltaGewicht() >= Durchfluss){
        setZustand(false);
        cout << "Ventil von Dosierer \"" << getZutat() << "\" geschlossen.";
    };
}

/**
 * 
 */
void Dosierer::setZustand(bool zustand)
{
	Zustand=zustand;
}

void Dosierer::setSubject(Waage* waage){
    subject = waage;
}

bool Dosierer::getTyp() const{
    return Typ;
}

/**
 * 
 */
bool Dosierer::getZustand() const
{
	return Zustand;
}

void Dosierer::dosieren(float menge){
    setDurchfluss(menge);
    subject->setDeltaGewicht(0);
    subject->attach(this);
    setZustand(true);
    cout << endl << "Ventil von Dosierer \"" << getZutat() << "\" geöffnet." << endl;
    subject->showGewicht();
    while(getZustand()){
        if(!getTyp()){
            //Stückdosierer
            if(getZutat() == "Limettenstücke"){
                subject->addGewicht(10);
                subject->notify();
                subject->getZeit()->sleep(1000);
            }
            else{
                subject->addGewicht(20);
                subject->notify();
                subject->getZeit()->sleep(1000);
            }
        }
        else{
            //normaler Dosierer
            subject->addGewicht(1);
            subject->notify();
            subject->getZeit()->sleep(250);
        }
    }
    subject->detach(this);
    cout << endl;
}

void Dosierer::setDurchfluss(float menge){
    Durchfluss = menge;
}