/**
 * @(#) Rezeptur_Prozessor.cpp
 */


#include "Rezeptur_Prozessor.h"
#include "Zeit.h"
#include <iostream>

Rezeptur_Prozessor::Rezeptur_Prozessor(){
    
}

Rezeptur_Prozessor::Rezeptur_Prozessor(Dosierer_Verwaltung *dVerwaltung){
    Zeit* zeit = new Zeit();
    Stampfer* stampfer = new Stampfer(zeit);
    Mischer* mischer = new Mischer(zeit);
    Waage* waage = new Waage(zeit);
    Entleerer* entleerer = new Entleerer(waage, zeit);
    
    m_Zeit = zeit;
    m_Dosierer_Verw = dVerwaltung;
    m_Stampfer = stampfer;
    m_Mischer = mischer;
    m_Waage = waage;
    m_Entleerer = entleerer;
    
    for(int i = 0; i < m_Dosierer_Verw->getM_Dosierer().size(); i++){
        m_Dosierer_Verw->getM_Dosierer().at(i)->setSubject(m_Waage);
    }
    
}

Rezeptur_Prozessor::~Rezeptur_Prozessor(){
    
}
/**
 * 
 * */
void Rezeptur_Prozessor::bereite_zu(Rezept* rezept)
{
    for(int i = 0; i < rezept->getAnzahlRezeptschritte(); i++){
        Rezeptschritt* rSchritt = rezept->getRezeptSchritt(i);
        if(rSchritt->getZutat() == "Mischen"){
            m_Mischer->mischen(rSchritt->getMenge());
        }
        else if(rSchritt->getZutat() == "Stampfen"){
            m_Stampfer->stampfen(rSchritt->getMenge());
        }
        else{
            for(int i = 0; i < m_Dosierer_Verw->getM_Dosierer().size(); i++){
                if(m_Dosierer_Verw->getM_Dosierer().at(i)->getZutat() == rSchritt->getZutat()){
                    m_Dosierer_Verw->getM_Dosierer().at(i)->dosieren(rSchritt->getMenge());
                }
            }
        }
    }
    m_Entleerer->leeren();
    m_Entleerer->reinigen();
}

Zeit* Rezeptur_Prozessor::getTimer() const{
    return m_Zeit;
}