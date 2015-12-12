/**
 * @(#) Mischer.h
 */

#ifndef MISCHER_H_H
#define MISCHER_H_H

#include "Zeit.h"
#include <iostream>

using namespace std;

/**
 * Der Mischer mischt für eine definierte Zeitdauer
 * */
class Mischer
{
	
    public:
        /**
         * Konstruktor zum erstellen eines Mischers
         * @param zeit Zeit-Objekt zum warten
         */
        Mischer(Zeit* zeit);
        
        /**
         * Standarddestruktor
         */
        virtual ~Mischer();
        
        /*-----------------------Funktionen-----------------------*/
        
	/**
         * Mischt den Behälter für eine bestimmte Zeit
         * @param zeit Zeit die gemischt werden soll
         */
	void mischen(float zeit);
	
    private:
        Zeit* m_Zeit;
};

#endif
