/**
 * @(#) Rezeptur_Prozessor.cpp
 */


#include "Rezeptur_Prozessor.h"
#include <iostream>

Rezeptur_Prozessor::Rezeptur_Prozessor(){
    
}

Rezeptur_Prozessor::Rezeptur_Prozessor(Dosierer_Verwaltung *dVerwaltung){
    Stampfer* stampfer = new Stampfer();
    Mischer* mischer = new Mischer();
    Waage* waage = new Waage();
    Entleerer* entleerer = new Entleerer(waage);
    
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
bool Rezeptur_Prozessor::add_Zutat(std::string zutat, int anzahl)
{
	
}

