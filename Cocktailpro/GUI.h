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
	 * 
	 */
	GUI();
        /**
	 * 
	 */
	virtual ~GUI();
	/**
	 * 
	 * */
	void init();
	/**
	 * 
	 * */
	void printCocktails();
	
private:
	/**
	 * 
	 * */
	Dosierer_Verwaltung * m_Dosierer_Verwaltung;
	
	/**
	 * 
	 * */
	Rezeptur_Prozessor * m_Rezeptur_Prozessor;
	
	/**
	 * 
	 * */
	Gefilltertes_Rezeptbuch * m_Rezepte;
	
	
};

#endif
