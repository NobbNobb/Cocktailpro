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
        Entleerer(Waage *waage);
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
	public:
	
	/**
	 * 
	 */
	void setZustand(bool zustand);
	
	/**
	 * 
	 */
	bool isZustand() const;
	
};

#endif
