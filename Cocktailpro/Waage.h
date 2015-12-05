/**
 * @(#) Waage.h
 */

#ifndef WAAGE_H_H
#define WAAGE_H_H

//#include "Subject.h"
/**
 * Die Waage kontroliert das Gewicht des zu befüllenden Behälters während des ganzen Mischvorganges.Überprüft das Absolute Gewicht und den Delta-Nullpunkt
 * */
class Waage//: public Subject
{
	

	/**
	 * 
	 */
	int Gewicht;
	
	/**
	 * 
	 */
	int deltaGewicht;
	public:
	
	/**
	 * 
	 */
	void setGewicht(int gewicht);
	
	/**
	 * 
	 */
	int getGewicht() const;
	
	/**
	 * 
	 */
	void setDeltaGewicht(int deltaGewicht);
	
	/**
	 * 
	 */
	int getDeltaGewicht() const;
	
	/**
	 * 
	 */
	void addGewicht(int Gewicht);
	
};

#endif
