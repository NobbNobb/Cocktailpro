/**
 * @(#) Entleerer.cpp
 */


#include "Entleerer.h"
#include <iostream>

Entleerer::Entleerer(){
    
}

Entleerer::Entleerer(Waage *waage, Zeit* zeit){
    subject = waage;
    m_Zeit = zeit;
    Zustand = false;
}

Entleerer::~Entleerer(){
    
}
/**
 * 
 * */
void Entleerer::reinigen()
{
    cout << endl << "Cocktailbehälter wird gereinigt. Bitte warten: ";
    for(int i = 0; i < 10; i++){
        cout << "*";
        cout.flush();
        subject->getZeit()->sleep(1000);
    }
    cout << endl;
}

/**
 * 
 * */
void Entleerer::leeren()
{
    subject->setDeltaGewicht(subject->getGewicht());
    subject->attach(this);
    setZustand(true);
    cout << endl << "Entleerventil geöffnet." << endl;
    subject->showGewicht();
    while(getZustand()){
        subject->addGewicht(-25);
        subject->notify();
        subject->getZeit()->sleep(1000);
    }
    subject->detach(this);
}


/**
 * 
 */
void Entleerer::update()
{
    subject->showGewicht();
    if(subject->getDeltaGewicht() <= 0){
        setZustand(false);
        cout << "Entleerventil geschlossen." << endl;
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

Zeit* Entleerer::getZeit() const{
    return m_Zeit;
}