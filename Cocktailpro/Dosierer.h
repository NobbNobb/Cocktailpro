/**
 * @(#) Dosierer.h
 */

#ifndef DOSIERER_H_H
#define DOSIERER_H_H

#endif
#include <string>
//#include "Observer.h"
#include "string.h"
#include "Waage.h"

using namespace std;

/**
 * Die Dosierer legen die Mischbaren Rezepte fest. Es gibt zwei Arten von Dosierer (Stückdosierer und Ventildosierer). Die Dosierung wird durch die Waage kontrolliert.
 * */
class Dosierer//: public Observer
{
	public:
	
	/**
	 * 
	 * */
	std::string getZutat() const;
	
	/**
	 * 
	 */
	bool isZustand() const;
	
	/**
	 * 
	 */
	void setZustand(bool zustand);
	
	/**
	 * 
	 * */
	void setZutat(std::string zutat);
	
	/**
	 * 
	 */
	virtual void update();
	private:
	
	/**
	 * 
	 */
	Waage * subject;
	
	/**
	 * 
	 */
	bool Zustand;
	
	/**
	 * 
	 * */
	std::string Zutat;
	
};
