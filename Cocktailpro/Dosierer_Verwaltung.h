/**
 * @(#) Dosierer_Verwaltung.h
 */

#ifndef DOSIERER_VERWALTUNG_H_H
#define DOSIERER_VERWALTUNG_H_H

#include "string.h"
#include "Dosierer.h"
#include <vector>
#include <string>
using namespace std;
/**
 * Erstellt die Dosierer und befüllt diese (Zutat, Durchflussrate)
 * */
class Dosierer_Verwaltung
{
	
public:
	/**
	 * 
	 */
	Dosierer_Verwaltung();
        /**
	 * 
	 */
	virtual ~Dosierer_Verwaltung();
	/**
	 * 
	 * */
	void dateiLaden();
	/**
	 * 
	 * */
	vector<Dosierer*> getM_Dosierer() const;
	/**
	 * 
	 * */
	std::vector<std::string> getZutaten() const;

	
private:
	/**
	 * 
	 * */
	vector<Dosierer*> m_Dosierer;
	
	/**
	 * 
	 * */
	vector<string> Zutaten;
	
	
};

#endif
