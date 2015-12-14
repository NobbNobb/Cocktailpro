/**
 * @(#) GUI.cpp
 */


#include "GUI.h"

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
    int eingabe = 0;
    cout << "Bitte Cocktail auswählen (0 für Abbruch): ";   
    while(!eingabe){                    
        while(!(cin >> eingabe)){                                               //Eingabe auf Falscheingabe prüfen
            cout << "Falsche Eingabe! Bitte ernaut eingeben (0 für Abbruch): ";                 
            cin.clear();                                                        //Löschen von error flags
            cin.ignore(std::numeric_limits<int>::max(),'\n');                   //Bis zur nächsten newline überspringen
        }
        if(0 < eingabe && eingabe <= m_Rezepte->getAnzahlRezepte()){             //Prüfen ob die Eingabe im Zahlenbereich liegt
            cout << "Sie haben \"" << m_Rezepte->getRezept(eingabe - 1)->getName() << "\" gewählt." << endl; 
            m_Rezeptur_Prozessor->bereite_zu(m_Rezepte->getRezept(eingabe - 1));//Cocktail zubereiten
            cin.clear();                                                        //Löschen von error flags
            cin.ignore(std::numeric_limits<int>::max(),'\n');                   //Bis zur nächsten newline überspringen
        }
        else if(eingabe == 0){                                                  //Prüfen ob "0" eingegeben wurde
            eingabe = 1;                                                        //Abbruchsbedingung setzen
            cin.clear();                                                        //Löschen von error flags
            cin.ignore(std::numeric_limits<int>::max(),'\n');                   //Bis zur nächsten newline überspringen
        }
        else{
            cout << "Falsche Eingabe! Bitte erneut eingeben (0 für Abbruch): ";
            eingabe = 0;                                                        //Abbruchsbedingung nicht setzen
            cin.clear();                                                        //Löschen von error flags
            cin.ignore(std::numeric_limits<int>::max(),'\n');                   //Bis zur nächsten newline überspringen
        }
    }
}

void GUI::speedModus(){
    if(m_Rezeptur_Prozessor->getZeit()->getModus()){                       //Prüfen ob Speedmodus schon an ist
        cout << "Entwicklermodus wurde ausgeschaltet." << endl;
        m_Rezeptur_Prozessor->getZeit()->setModus(false);                  //Speedmodus ausschalten
    }
    else{
        cout << "Entwicklermodus wurde eingeschaltet." << endl;
        m_Rezeptur_Prozessor->getZeit()->setModus(true);                   //Speedmodus einschalten
    }
}
