/**
 * @(#) Entleerer.h
 */

#ifndef ENTLEERER_H_H
#define ENTLEERER_H_H

#include "Observer.h"
#include "Waage.h"
/**
 * Der Entleerer entleert den Behälter und reinigt diesen anschliesend
 * */
class Entleerer: public Observer
{
	
public:
        Entleerer();
        Entleerer(Waage *waage, Zeit* zeit);
        virtual ~Entleerer();
	/**
	 * 
	 * */
	void leeren();
	/**
	 * 
	 * */
	void reinigen();
	

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
        
        Zeit* m_Zeit;
        
	public:
	
	/**
	 * 
	 */
	void setZustand(bool zustand);
	
	/**
	 * 
	 */
	bool getZustand() const;
        
        Zeit* getZeit() const;
	
};

#endif
