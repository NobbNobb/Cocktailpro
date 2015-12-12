/**
 * @(#) Entleerer.cpp
 */


#include "Entleerer.h"
#include <iostream>

Entleerer::Entleerer(){
    
}

Entleerer::Entleerer(Waage *waage){
    subject = waage;
    Zustand = false;
}

Entleerer::~Entleerer(){
    
}
/**
 * 
 * */
void Entleerer::reinigen()
{
	
}

/**
 * 
 * */
void Entleerer::leeren()
{
    subject->setDeltaGewicht(subject->getGewicht());
    subject->attach(this);
    setZustand(true);
    cout << "Entleerventil geöffnet" << endl;
    while(getZustand()){
        cout << "Es werden 25g des Cocktails entleert" << endl;
        subject->addGewicht(-25);
        subject->notify();
    }
    subject->detach(this);
}


/**
 * 
 */
void Entleerer::update()
{
	if(subject->getDeltaGewicht() <= 0){
        setZustand(false);
        cout << "Entleerventil geschlossen" << endl;
    };
}

/**
 * 
 */
void Entleerer::setZustand(bool zustand)
{
	Zustand=zustand;
}

/**
 * 
 */
bool Entleerer::getZustand() const
{
	return Zustand;
}
