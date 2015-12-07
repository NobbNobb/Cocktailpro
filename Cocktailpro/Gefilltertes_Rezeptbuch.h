/**
 * @(#) Gefilltertes_Rezeptbuch.h
 */

#ifndef GEFILLTERTES_REZEPTBUCH_H_H
#define GEFILLTERTES_REZEPTBUCH_H_H

#include "string.h"
#include "Dosierer_Verwaltung.h"
#include "Rezeptbuch.h"
#include "Rezeptur_Prozessor.h"
#include <vector>

using namespace std;

/**
 * Erbt vom Rezeptbuch und Filtert die Möglichen Rezepte
 * */
class Gefilltertes_Rezeptbuch: public Rezeptbuch
{
	
public:
	/**
	 * 
	 */
	Gefilltertes_Rezeptbuch();
        /**
	 * 
	 */
	virtual ~Gefilltertes_Rezeptbuch();
	/**
	 * 
	 * */
	void filtern(std::vector<std::string> zutaten);
	
private:
	/**
	 * 
	 * */
	Dosierer_Verwaltung * m_Dosierer_Verw;
	

};

#endif
