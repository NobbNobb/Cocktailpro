/**
 * @(#) GUI.cpp
 */


#include "GUI.h"
#include <iostream>

using namespace std;

/**
 * 
 */
GUI::GUI(){
}

/**
 * 
 */
GUI::~GUI(){
}
/**
 * 
 * */
void GUI::init()
{
    cout << "Beginn der Iinitialisierung..." << endl;
    Dosierer_Verwaltung* d_Verwaltung = new Dosierer_Verwaltung();
    Gefilltertes_Rezeptbuch* rezepte = new Gefilltertes_Rezeptbuch();
    
    m_Dosierer_Verwaltung = d_Verwaltung;
    m_Rezepte = rezepte;
    
    m_Dosierer_Verwaltung->dateiLaden();
    m_Rezepte->filtern(m_Dosierer_Verwaltung->getZutaten());
    Rezeptur_Prozessor* rProzessor = new Rezeptur_Prozessor(d_Verwaltung);
    m_Rezeptur_Prozessor = rProzessor;
    cout << "Initialisierung wurde erfolgreich abgeschlossen." << endl;
}

/**
 * 
 * */
void GUI::printCocktails()
{
    cout << "Folgende Rezepte stehen zur Verfügung: " << endl;
    for( int i = 0; i < m_Rezepte->getAnzahlRezepte(); i++){
        Rezept* rezept = m_Rezepte->getRezept(i);
        cout << "**** (" << i<< ")" << rezept->getName() << " ****" << endl;
    }
}

void GUI::Menue(){
    
}

