/**
 * @(#) Subject.h
 */

#ifndef SUBJECT_H_H
#define SUBJECT_H_H

#include "Observer.h"
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Subject-Klasse mit den Funktionen zum anmelden, abmelden und benachrichtigen von Observern
 */
class Subject
{
	
    public:
        /**
         * meldet einen Observer an
         * @param observer der anzumeldende Observer
         */
	void attach(Observer *observer);
        
        /**
         * meldet einen Observer ab
         * @param observer der abzumeldende Observer
         */
	void detach(Observer *observer);
        
	/**
	 * benachrichtigt alle Observer
	 */
	void notify();
	
    private:
	/**
	 * Vektor mit allen Observer-Objekten
	 */
	vector<Observer*> observers;
	
	
};

#endif
