/**
 * @(#) Dosierer.h
 */

#ifndef DOSIERER_H_H
#define DOSIERER_H_H

#endif
#include <string>
#include "Observer.h"
#include "string.h"
#include "Waage.h"

using namespace std;

/**
 * Die Dosierer legen die Mischbaren Rezepte fest. Es gibt zwei Arten von Dosierer (Stückdosierer und Ventildosierer). Die Dosierung wird durch die Waage kontrolliert.
 * */
class Dosierer: public Observer
{
	public:
            
            
        Dosierer();
        Dosierer(string zutat, bool typ);
        virtual ~Dosierer();
	/**
	 * 
	 * */
	string getZutat() const;
	
	/**
	 * 
	 */
	bool getZustand() const;
	
	/**
	 * 
	 */
	void setZustand(bool zustand);
	
        void dosieren(float menge);
        
        void setSubject(Waage *waage);
        
        bool getTyp() const;
        
        void setDurchfluss(float menge);
	
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
	string Zutat;
        
        bool Typ; //false = Stückdosierer, true = normaler Dosierer
        
        float Durchfluss;
	
};
