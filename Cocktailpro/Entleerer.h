/**
 * @(#) Entleerer.h
 */

#ifndef ENTLEERER_H_H
#define ENTLEERER_H_H

#include "Observer.h"
#include "Waage.h"
#include <iostream>

using namespace std;

/**
 * Der Entleerer entleert den Behälter und reinigt diesen anschliesend
 * */
class Entleerer: public Observer
{
	
    public:
        /**
         * Konstruktor zum erstellen eines Entleerers
         * @param waage Waagen-Objekt zum beobachten
         * @param zeit  Zeit-Objekt zum warten
         */
        Entleerer(Waage *waage);
        
        /**
         * Standarddestruktor
         */
        virtual ~Entleerer();
        
        /*-----------------------Getter-----------------------*/
        
        /**
         * gibt den Zustan des Ventils zurück
         * @return false oder true (geschlossen oder geöffnet)
         */
	bool getZustand() const;
        
        /*-----------------------Setter-----------------------*/
        
        /**
         * setzt den Zustand des Ventils
         * @param zustand
         */
	void setZustand(bool zustand);
        
        /*-----------------------Funktionen-----------------------*/
        
	/**
	 * Entleert den Cocktailbehälter mit 25g pro Sekunde
	 * */
	void leeren();
        
	/**
	 * reinigt den Cocktailbehälter in 10 Sekunden
	 * */
	void reinigen() const;

	/**
	 * Funktion zur Aktuallisierung nach Änderung beim zu beobachtenden Objektes
	 */
	virtual void update();
        
    private:
	
	/**
	 * Das zu beobachtende Objekt
	 */
	Waage * m_Subject;
	
	/**
	 * Zustand ob das Ventil geöffnet ist (true = offen, false = geschlossen)
	 */
	bool m_Zustand;
};

#endif
