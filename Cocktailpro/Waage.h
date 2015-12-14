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
class Waage: public Subject{
    
    public:
        /**
         * Konstruktor zum erstellen einer Waage
         * @param zeit Zeit-Objekt zum warten
         */
        Waage(Zeit* zeit);
        
        /**
         * Standarddestrukotr
         */
        virtual ~Waage();
	
        /*-----------------------Getter-----------------------*/
        
        /**
         * gibt das Differenzgewicht zurück
         * @return Differenzgewicht
         */
	float getDeltaGewicht() const;
        
        /**
         * gibt das Gewicht zurück
         * @return Gewicht
         */
	float getGewicht() const;
        
        /**
         * gibt das Zeit-Objekt zurück
         * @return Zeit-Objekt
         */
        Zeit* getZeit() const;
	
        /*-----------------------Setter-----------------------*/
        
        /**
         * setzt das Differenzgewicht
         * @param deltaGewicht Betrag des Gewischtes
         */
	void setDeltaGewicht(float deltaGewicht);

        /*-----------------------Funktionen-----------------------*/
        
	/**
         * fügt der Waage Gewicht hinzu
         * @param Gewicht Betrag des Gewichtes
         */
	void addGewicht(float Gewicht);
        
        /**
         * zieht der Waage Gewicht ab
         * @param Gewicht Betrag des Gewichtes
         */
        void subGewicht(float Gewicht);
        
        /**
         * zeigt das Absolute- und Differenzgewicht an
         */
        void showGewicht();
        
    private:
        /**
	 * Betrag des Absolutgewichtes
	 */
	float m_Gewicht;
	
	/**
	 * Betrag des Differenzgewichtes
	 */
	float m_DeltaGewicht;
        
        /**
         * Zeit-Objetk zum warten
         */
        Zeit* m_Zeit;      
};

#endif
