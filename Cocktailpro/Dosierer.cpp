/**
 * @(#) Dosierer.cpp
 */


#include "Dosierer.h"

Dosierer::Dosierer(){
    
}

Dosierer::Dosierer(string zutat){
    Zutat = zutat;
    Zustand = false;
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

void Dosierer::setSubject(Waage* waage){
    subject = waage;
}

/**
 * 
 */
bool Dosierer::isZustand() const
{
	return Zustand;
}
