/**
 * @(#) Dosierer.h
 */

#ifndef DOSIERER_H_H
#define DOSIERER_H_H

#endif
#include "Observer.h"
#include "string.h"
#include "Waage.h"
#include <iostream>
#include <string>

using namespace std;

/**
 * Die Dosierer legen die Mischbaren Rezepte fest. Es gibt zwei Arten von Dosierer (Stückdosierer und Ventildosierer). Die Dosierung wird durch die Waage kontrolliert.
 * */
class Dosierer: public Observer
{
    public:
        /**
         * Konstruktor zum erstellen des Dosierers
         * @param zutat Zutat des Dosierers
         * @param typ Stückdosierer oder normaler Dosierer
         */
        Dosierer(string zutat, bool typ);
        
        /**
         * Standarddestruktor
         */
        virtual ~Dosierer();
    
        /*-----------------------Getter-----------------------*/
        
	/**
	 * gibt die Zutat des Dosierers zurück
         * @return Zutat 
	 * */
	string getZutat() const;
	
	/**
	 * gibt den Zustand des Ventils zurück
         * @return false oder true (geschlossen oder offen)
	 */
	bool getZustand() const;
	
        /**
         * gibt den Typ des Dosierers zurück
         * @return false oder true (Stückdosierer oder normaler Dosierer)
         */
        bool getTyp() const;
        
        /*-----------------------Setter-----------------------*/
        
        /**
         * setzen des Zustandes
         * @param zustand
         */
	void setZustand(bool zustand);
        
        /**
         * setzen des zu beobachtenden Objekts
         * @param waage
         */
        void setSubject(Waage *waage);
        
        /**
         * setzen der zu dosierende Menge
         * @param menge
         */
        void setDurchfluss(float menge);
	
        /*-----------------------Funktionen-----------------------*/
        
        /**
         * Funktion zum dosieren der Zutat
         * @param menge
         */
        void dosieren(float menge);
	
        /**
	 * Funktion zur Aktuallisierung nach Änderung beim zu beobachtenden Objektes 
	 */
	virtual void update();
        
    private:
	
	/**
	 *Das zu beobachtende Objekt 
	 */
	Waage * m_Subject;
	
	/**
	 *Zustand ob das Ventil geöffnet ist (true = offen, false = geschlossen)
	 */
	bool m_Zustand;
	
	/**
	 *Die Zutat die sich im Dosierer befindet 
	 * */
	string m_Zutat;
        
        /**
         *Angabe ob Stückdosierer(false) oder normaler Dosierer(true)
         * */
        bool m_Typ; 
        
        /**
         *Menge die dosiert werden muss
         **/
        float m_Durchfluss;	
};
