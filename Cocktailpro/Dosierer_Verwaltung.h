/**
 * @(#) Dosierer_Verwaltung.h
 */

#ifndef DOSIERER_VERWALTUNG_H_H
#define DOSIERER_VERWALTUNG_H_H

#include "string.h"
#include "Dosierer.h"
#include <vector>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;
/**
 * Erstellt die Dosierer und befüllt diese (Zutat, Durchflussrate)
 * */
class Dosierer_Verwaltung
{
	
    public:
	/**
	 * Konstruktor zur Erstellung einer Dosiererverwaltung
	 */
	Dosierer_Verwaltung();
        
        /**
	 * Standarddestruktor
	 */
	virtual ~Dosierer_Verwaltung();
        
        /*-----------------------Getter-----------------------*/
        
        /**
         * gibt den Vector der Dosierer-Objekte zurück
         * @return vector mit Dosierer-Objekte
         */
	vector<Dosierer*> getM_Dosierer() const;
        
	/**
	 * gibt den Vector der Zutaten zurück
         * @return vector mit Zutaten
	 * */
	vector<string> getZutaten() const;
        
        /*-----------------------Funktionen-----------------------*/
        
	/**
	 * liest die Zutatendatei ein und erstellt die Dosierer
	 * */
	void dateiLaden();
	
    private:
	
        /**
	 * Vector der Dosierer-Objekte
	 * */
	vector<Dosierer*> m_Dosierer;
	
	/**
	 * Vector der Zutaten
	 * */
	vector<string> m_Zutaten;
};

#endif
