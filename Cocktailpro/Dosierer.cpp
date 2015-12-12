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
    if(subject->getDeltaGewicht() >= Durchfluss){
        setZustand(false);
        cout << "Ventil von Dosierer " << getZutat() << " geschlossen" << endl;
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
    cout << "Ventil von Dosierer " << getZutat() << " geöffnet" << endl;
    while(getZustand()){
        if(!getTyp()){
            //Stückdosierer
            if(getZutat() == "Limettenstücke"){
                cout << "Es werden 10g Limettenstücke dosiert" << endl;
                subject->addGewicht(10);
                subject->notify();
                subject->getZeit()->sleep(1000);
            }
            else{
                cout << "Es werden 20g Eis dosiert" << endl;
                subject->addGewicht(20);
                subject->notify();
                subject->getZeit()->sleep(1000);
            }
        }
        else{
            //normaler Dosierer
                cout << "Es wird 1g " << getZutat() << " dosiert" << endl;
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