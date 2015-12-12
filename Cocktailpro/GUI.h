/**
 * @(#) GUI.h
 */

#ifndef GUI_H_H
#define GUI_H_H

#include "Gefilltertes_Rezeptbuch.h"
#include "Dosierer_Verwaltung.h"
#include "Rezeptur_Prozessor.h"
/**
 * Das Display bietet die Übersicht der mischbaren Cocktails und gibt Informationen zum Mischvorgang an
 * */
class GUI
{
	
    public:
	/**
	 * Standardkonstruktor
	 */
	GUI();
        
        /**
	 * Standarddestruktor
	 */
	virtual ~GUI();
        
        /*-----------------------Funktionen-----------------------*/
        
	/**
	 * Initialisierung der Objekte
	 * */
	void init();
        
	/**
	 * Ausgabe der Cocktails
	 * */
	void printCocktails() const;
        
        /**
         * Ausgabe des Menüs
         */
        void menue();
        
        /**
         * Funktion zum auswählen eines Cocktails
         */
        void cocktailAuswahl() const;
        
        /**
         * Funktion um den Speedmodus aus- und anzuschalten
         */
        void speedModus();
	
    private:
	/**
	 * Das Objekt der Dosiererverwaltung
	 * */
	Dosierer_Verwaltung * m_Dosierer_Verwaltung;
	
	/**
	 * Das Objekt des Rezepturprozessors
	 * */
	Rezeptur_Prozessor * m_Rezeptur_Prozessor;
	
	/**
	 * Das Objekt des Gefillterten Rezeptbuches
	 * */
	Gefilltertes_Rezeptbuch * m_Rezepte;
	
	
};

#endif
