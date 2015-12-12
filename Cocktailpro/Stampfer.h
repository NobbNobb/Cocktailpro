/**
 * @(#) Stampfer.h
 */

#ifndef STAMPFER_H_H
#define STAMPFER_H_H

#include "Zeit.h"
#include <iostream>

using namespace std;

/**
 * Der Stampfer stampft für eine definierte Zeitdauer
 * */
class Stampfer{
    
    public:
        /**
         * Konstruktor zum erstellen eines Stampfers
         * @param zeit Zeit-Objekt zum warten
         */
        Stampfer(Zeit* zeit);
        
        /**
         * Standarddestruktor
         */
        virtual ~Stampfer();
        
        /*-----------------------Funktionen-----------------------*/
        
        /**
         * Funktion zum stampfen
         * @param zeit Dauer wie lange gestampft werden soll
         */
	void stampfen(float zeit);

    private:
        Zeit* m_Zeit;
};

#endif
