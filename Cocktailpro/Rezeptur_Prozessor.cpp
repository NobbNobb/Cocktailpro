/**
 * @(#) Rezeptur_Prozessor.cpp
 */


#include "Rezeptur_Prozessor.h"
#include "Zeit.h"

Rezeptur_Prozessor::Rezeptur_Prozessor(Dosierer_Verwaltung *dVerwaltung){
    //Erstellen aller benötigten Objekte
    Zeit* zeit = new Zeit();
    Stampfer* stampfer = new Stampfer(zeit);
    Mischer* mischer = new Mischer(zeit);
    Waage* waage = new Waage(zeit);
    Entleerer* entleerer = new Entleerer(waage, zeit);
    
    //Speichern aller benötigten Objekte
    m_Zeit = zeit;
    m_Dosierer_Verw = dVerwaltung;
    m_Stampfer = stampfer;
    m_Mischer = mischer;
    m_Waage = waage;
    m_Entleerer = entleerer;
    
    //Hinzufügen des Waagen-Objektes zu jedem Dosierer-Objekt
    for(int i = 0; i < m_Dosierer_Verw->getM_Dosierer().size(); i++){
        m_Dosierer_Verw->getM_Dosierer().at(i)->setSubject(m_Waage);
    }
    
}

Rezeptur_Prozessor::~Rezeptur_Prozessor(){   
}

/*-----------------------Getter-----------------------*/

Zeit* Rezeptur_Prozessor::getZeit() const{
    return m_Zeit;
}

/*-----------------------Funktionen-----------------------*/

void Rezeptur_Prozessor::bereite_zu(Rezept* rezept){
    for(int i = 0; i < rezept->getAnzahlRezeptschritte(); i++){    //Alle Rezeptschritte durchlaufen         
        Rezeptschritt* rSchritt = rezept->getRezeptSchritt(i);     //Rezeptschritt-Objekt erstellen und Rezeptschritt speichern
        if(rSchritt->getZutat() == "Mischen"){                     //Prüfen ob die Zutat "Mischen" ist
            m_Mischer->mischen(rSchritt->getMenge());              //Cocktail mischen
        }
        else if(rSchritt->getZutat() == "Stampfen"){               //Prüfen ob die Zutat "Stampfen" ist
            m_Stampfer->stampfen(rSchritt->getMenge());            //Cocktail stampfen
        }
        else{
            for(int i = 0; i < m_Dosierer_Verw->getM_Dosierer().size(); i++){   //Alle Dosierer durchlaufen
                if(m_Dosierer_Verw->getM_Dosierer().at(i)->getZutat() == rSchritt->getZutat()){ //Dosierer-Zutat mit Rezeptschritt-Zutat vergleichen
                    m_Dosierer_Verw->getM_Dosierer().at(i)->dosieren(rSchritt->getMenge());     //Zutat dosieren
                }
            }
        }
    }
    m_Entleerer->leeren();              //Behälter leeren
    m_Entleerer->reinigen();            //Behälter reinigen
}

