/**
 * @(#) Waage.h
 */

#ifndef WAAGE_H_H
#define WAAGE_H_H

#include "Subject.h"
#include "Zeit.h"
#include <iostream>

using namespace std;

/**
 * Die Waage kontroliert das Gewicht des zu befüllenden Behälters während des ganzen Mischvorganges.Überprüft das Absolute Gewicht und den Delta-Nullpunkt
 * */
class Waage: public Subject
{
	

	/**
	 * 
	 */
	float Gewicht;
	
	/**
	 * 
	 */
	float deltaGewicht;
        
        Zeit* m_Zeit;
	public:
            
        Waage();
        Waage(Zeit* timer);
        virtual ~Waage();
	
	/**
	 * 
	 */
	void setGewicht(float gewicht);
	
	/**
	 * 
	 */
	float getGewicht() const;
        
        Zeit* getZeit() const;
	
	/**
	 * 
	 */
	void setDeltaGewicht(float deltaGewicht);
	
	/**
	 * 
	 */
	float getDeltaGewicht() const;
	
	/**
	 * 
	 */
	void addGewicht(float Gewicht);
        
        void showGewicht();
        
};

#endif
