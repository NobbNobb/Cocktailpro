/**
 * @(#) GUI.cpp
 */


#include "GUI.h"
#include <iostream>
#include <string>
#include <cstdlib>

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
        cout << "**** (" << i+1<< ")" << rezept->getName() << " ****" << endl;
    }
}

void GUI::menue(){
    string eingabe;
    int zahl = 1;
    while(zahl){
        cout << "*******Menue*******" << endl;
        cout << "(1) Cocktails anzeigen" << endl;
        cout << "(2) Cocktail auswählen" << endl;
        cout << "(3) Entwickler Modus" << endl;
        cout << "(4) Beenden" << endl;
        cout << "Eingabe: ";
        getline(cin, eingabe);
        zahl = atoi(eingabe.c_str());
        switch(zahl){
            case 1:
                printCocktails();
                break;
            case 2:
                cout << "Noch nicht implementiert" << endl;
                break;
            case 3:
                cout << "Noch nicht implementiert" << endl;
                break;
            case 4:
                cout << "Auf Wiedersehen" << endl;
                zahl = 0;
                break;
            default:
                cout << "Falsche Eingabe! Bitte erneut eingeben" << endl;
                zahl = 1;
                break;
        }
    }    
    
}

