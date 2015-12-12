/**
 * @(#) Rezeptur_Prozessor.h
 */

#ifndef REZEPTUR_PROZESSOR_H_H
#define REZEPTUR_PROZESSOR_H_H

#include "Entleerer.h"
#include "Stampfer.h"
#include "Mischer.h"
#include "Waage.h"
#include "Zeit.h"
#include "Dosierer_Verwaltung.h"
#include "string.h"
#include "Gefilltertes_Rezeptbuch.h"
/**
 * Führt falls notwendig koordinierende Tätigkeiten aus. Dient als Schnittstelle zwischen Rezeptbuch und dem Cocktailmischer
 * */
class Rezeptur_Prozessor
{
	
    public:
        /**
         * Konstruktor zum erstellen eines Rezepturprozessors
         * @param dVerwaltung Pointer auf ein Dosierer_Verwaltung-Objekt
         */
        Rezeptur_Prozessor(Dosierer_Verwaltung *dVerwaltung);
        
        /**
         * Standarddestruktor
         */
        virtual ~Rezeptur_Prozessor();
	
        /*-----------------------Getter-----------------------*/
        
        /**
         * gibt das Zeit-Objekt zurück
         * @return Zeit-Objekt
         */
        
        Zeit* getZeit() const;
        
        /*-----------------------Funktionen-----------------------*/
        
        /**
         * Koordiniert die Hardware anhand des zu mischenden Rezeptes
         * @param rezept Das Rezept das gemischt werden sool
         */
	void bereite_zu(Rezept* rezept);
	
    private:
	/**
	 * Das Objekt der Dosiererverwaltung
	 * */
	Dosierer_Verwaltung * m_Dosierer_Verw;
	
	/**
	 * Das Objekt des Entleerers
	 * */
	Entleerer * m_Entleerer;
	
	/**
	 * Das Objekt des Mischers
	 * */
	Mischer * m_Mischer;
	
	/**
	 * Das Objekt des Stampfers
	 * */
	Stampfer * m_Stampfer;
	
	/**
	 * Das Objekt der Waage
	 * */
	Waage * m_Waage;
        
        /**
         * Das Zeit-Objekt zum warten
         */
        Zeit*  m_Zeit;
};

#endif
