/**
 * @(#) Waage.cpp
 */


#include "Waage.h"

Waage::Waage(){
    Gewicht = 0;
    deltaGewicht = 0;
}

Waage::~Waage(){
    
}
/**
 * 
 */
void Waage::setGewicht(int gewicht)
{
	Gewicht=gewicht;
}

/**
 * 
 */
int Waage::getGewicht() const
{
	return Gewicht;
}

/**
 * 
 */
void Waage::setDeltaGewicht(int deltaGewicht)
{
	this->deltaGewicht=deltaGewicht;
}

/**
 * 
 */
int Waage::getDeltaGewicht() const
{
	return deltaGewicht;
}

/**
 * 
 */
void Waage::addGewicht(int Gewicht)
{
	
}
