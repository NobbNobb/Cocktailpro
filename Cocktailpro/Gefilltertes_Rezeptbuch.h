/**
 * @(#) Gefilltertes_Rezeptbuch.h
 */

#ifndef GEFILLTERTES_REZEPTBUCH_H_H
#define GEFILLTERTES_REZEPTBUCH_H_H

#include "Dosierer_Verwaltung.h"
#include "Rezeptbuch.h"
#include "Rezeptur_Prozessor.h"
#include <vector>
#include <string>

using namespace std;

/**
 * Erbt vom Rezeptbuch und Filtert die Möglichen Rezepte
 * */
class Gefilltertes_Rezeptbuch: public Rezeptbuch
{
	
    public:
	/**
	 * Standardkonstruktor zum erstellen eines gefillterten Rezeptbuches
	 */
	Gefilltertes_Rezeptbuch();
        
        /**
	 * Standarddestruktor
	 */
	virtual ~Gefilltertes_Rezeptbuch();
        
        /*-----------------------Funktionen-----------------------*/
        
	/**
         * löscht die Rezepte, die nicht gemischt werden können
         * @param zutaten vecotr mit allen verfügbaren Zutaten
         */
	void filtern(vector<string> zutaten);
};

#endif
