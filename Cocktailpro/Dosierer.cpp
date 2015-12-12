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
    while(getZustand()){
        if(getTyp() == false){
            //Stückdosierer
            if(getZutat() == "Limettenstücke"){
                //10g
                cout << "Es werden 10g Limettenstücke dosiert" << endl;
                subject->addGewicht(10);
                subject->notify();
            }
            else{
                //20g
                cout << "Es werden 20g Eis dosiert" << endl;
                subject->addGewicht(20);
                subject->notify();
            }
        }
        else{
            //normaler Dosierer
            for(int i = 0; i < 4; i++){
                cout << "Es werden 0.25g " << getZutat() << " Limettenstücke dosiert" << endl;
                subject->addGewicht(0.25);
                subject->notify();
            }
        }
    }
    subject->detach(this);
}

void Dosierer::setDurchfluss(float menge){
    Durchfluss = menge;
}