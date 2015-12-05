/**
 * @(#) Rezeptur_Prozessor.h
 */

#ifndef REZEPTUR_PROZESSOR_H_H
#define REZEPTUR_PROZESSOR_H_H

#include "Entleerer.h"
#include "Stampfer.h"
#include "Mischer.h"
#include "Waage.h"
#include "Dosierer_Verwaltung.h"
#include "string.h"
/**
 * Führt falls notwendig koordinierende Tätigkeiten aus. Dient als Schnittstelle zwischen Rezeptbuch und dem Cocktailmischer
 * */
class Rezeptur_Prozessor
{
	
public:
        Rezeptur_Prozessor();
        virtual ~Rezeptur_Prozessor();
	/**
	 * 
	 * */
	bool add_Zutat(std::string zutat, int anzahl);
	
private:
	/**
	 * 
	 * */
	Dosierer_Verwaltung * m_Doosierer_Verw;
	
	/**
	 * 
	 * */
	Entleerer * m_Entleerer;
	
	/**
	 * 
	 * */
	Mischer * m_Mischer;
	
	/**
	 * 
	 * */
	Stampfer * m_Stampfer;
	
	/**
	 * 
	 * */
	Waage * m_Waage;
	
	
};

#endif
