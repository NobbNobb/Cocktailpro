/**
 * @(#) Observer.h
 */

#ifndef OBSERVER_H_H
#define OBSERVER_H_H

/**
 * Abstrakte Observer-Klasse. Funktionen in den konkreten Observern implementiert
 */
class Observer
{
	
public:
	/**
	 * Funktion zur Aktuallisierung nach Änderung beim zu beobachtenden Objektes (virtual)
	 */
	virtual void update() = 0;	
};

#endif
