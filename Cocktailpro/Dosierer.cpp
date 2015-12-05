/**
 * @(#) Dosierer.cpp
 */


#include "Dosierer.h"
/**
 * 
 * */
std::string Dosierer::getZutat() const
{
	return Zutat;
}




/**
 * 
 * */
void Dosierer::setZutat(std::string zutat)
{
	Zutat=zutat;
}





/**
 * 
 */
void Dosierer::update()
{
	
}

/**
 * 
 */
void Dosierer::setZustand(bool zustand)
{
	Zustand=zustand;
}

/**
 * 
 */
bool Dosierer::isZustand() const
{
	return Zustand;
}
