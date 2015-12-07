/**
 * @(#) Entleerer.cpp
 */


#include "Entleerer.h"

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
	
}


/**
 * 
 */
void Entleerer::update()
{
	
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
bool Entleerer::isZustand() const
{
	return Zustand;
}
