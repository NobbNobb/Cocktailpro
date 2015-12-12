/**
 * @(#) Waage.cpp
 */


#include "Waage.h"
#include "Zeit.h"

Waage::Waage(){
    Gewicht = 0;
    deltaGewicht = 0;
}

Waage::Waage(Zeit* zeit){
    m_Zeit = zeit;
}

Waage::~Waage(){
    
}
/**
 * 
 */
void Waage::setGewicht(float gewicht)
{
	Gewicht=gewicht;
}

/**
 * 
 */
float Waage::getGewicht() const
{
	return Gewicht;
}

Zeit* Waage::getZeit() const{
    return m_Zeit;
}

/**
 * 
 */
void Waage::setDeltaGewicht(float deltaGewicht)
{
	this->deltaGewicht=deltaGewicht;
}

/**
 * 
 */
float Waage::getDeltaGewicht() const
{
	return deltaGewicht;
}

/**
 * 
 */
void Waage::addGewicht(float gewicht)
{
    deltaGewicht += gewicht;
    Gewicht += gewicht;
}
