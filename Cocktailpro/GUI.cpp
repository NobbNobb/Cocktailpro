/**
 * @(#) GUI.cpp
 */


#include "GUI.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


GUI::GUI(){
}

GUI::~GUI(){
}

/*-----------------------Funktionen-----------------------*/

void GUI::init(){
    cout << "Beginn der Iinitialisierung..." << endl;
    Dosierer_Verwaltung* d_Verwaltung = new Dosierer_Verwaltung();          //erstellen einer Dosiererverwaltung
    Gefilltertes_Rezeptbuch* rezepte = new Gefilltertes_Rezeptbuch();       //erstellen eines gefillterten Rezeptbuches
    
    m_Dosierer_Verwaltung = d_Verwaltung;                                   //Dosierer-Objekt speichern
    m_Rezepte = rezepte;                                                    //Gefilltertes_Rezeptbuch-Objekt speichern
    
    m_Dosierer_Verwaltung->dateiLaden();                                    //Zutatendatei einlesen
    m_Rezepte->filtern(m_Dosierer_Verwaltung->getZutaten());                //Rezeptbuch filltern
    Rezeptur_Prozessor* rProzessor = new Rezeptur_Prozessor(d_Verwaltung);  //erstellen eins Rezepturprozessors
    m_Rezeptur_Prozessor = rProzessor;                                      //Rezeptur_Prozessor-Objekt speichern
    cout << "Initialisierung wurde erfolgreich abgeschlossen." << endl;
}

void GUI::printCocktails() const{
    cout << endl << "Folgende Rezepte stehen zur Verfügung: " << endl;
    for( int i = 0; i < m_Rezepte->getAnzahlRezepte(); i++){                //Alle Rezepte durchlaufen
        Rezept* rezept = m_Rezepte->getRezept(i);                           //Rezept auswählen
        cout << "**** (" << i+1<< ")" << rezept->getName() << " ****" << endl; //Rezeptname ausgeben
    }
}

void GUI::menue(){
    string eingabe;
    int zahl = 1;
    while(zahl){
        cout << endl;
        cout << "*******Menue*******" << endl;
        cout << "(1) Cocktails anzeigen" << endl;
        cout << "(2) Cocktail auswählen" << endl;
        cout << "(3) Entwickler Modus" << endl;
        cout << "(4) Beenden" << endl;
        cout << "Eingabe: ";
        getline(cin, eingabe);                                              //Auf Eingabe warten
        zahl = atoi(eingabe.c_str());                                       //Falscher Eingabentyp abfangen
        switch(zahl){
            case 1:
                printCocktails();                                           //Cocktails ausgeben
                break;
            case 2:
                cocktailAuswahl();                                          //Cocktail auswählen
                break;
            case 3:
                speedModus();                                               //Speedmodus aktivieren
                break;
            case 4:
                cout << "Auf Wiedersehen" << endl;                          //Programm beenden
                zahl = 0;
                break;
            default:
                cout << "Falsche Eingabe! Bitte erneut eingeben" << endl;   //Falscheingabe abfangen
                zahl = 1;
                break;
        }
    }    
    
}

void GUI::cocktailAuswahl() const{
    string eingabe;
    int zahl = 0;
    while(!zahl){
        cout << "Bitte Cocktail auswählen (0 für Abbruch): ";
        getline(cin, eingabe);                                              //Auf Eingabe warten
        zahl = atoi(eingabe.c_str());                                       //Falscher Eingabentyp abfangen
        if(0 < zahl && zahl < m_Rezepte->getAnzahlRezepte()){               //Prüfen ob das gewählte Rezept existiert
            m_Rezeptur_Prozessor->bereite_zu(m_Rezepte->getRezept(zahl-1)); //Cocktail zubereiten
        }
        else if(zahl == 0){                                                 //Prüfen ob Abbruch gewählt wurde
            zahl = 1;                   
        }
        else{                                                               //Falscheingabe abfangen
            cout << "Falsche Eingabe! Bitte erneut eignaben" << endl;
            zahl = 0;
        }
    }
}

void GUI::speedModus(){
    if(m_Rezeptur_Prozessor->getTimer()->getModus()){                       //Prüfen ob Speedmodus schon an ist
        cout << "Entwicklermodus wurde ausgeschaltet." << endl;
        m_Rezeptur_Prozessor->getTimer()->setModus(false);                  //Speedmodus ausschalten
    }
    else{
        cout << "Entwicklermodus wurde eingeschaltet." << endl;
        m_Rezeptur_Prozessor->getTimer()->setModus(true);                   //Speedmodus einschalten
    }
}
