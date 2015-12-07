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
void Rezeptur_Prozessor::bereite_zu(Rezept* rezept)
{
    for(int i = 0; i < rezept->getAnzahlRezeptschritte(); i++){
        Rezeptschritt* rSchritt = rezept->getRezeptSchritt(i);
        if(rSchritt->getZutat() == "Mischen"){
            cout << "Hier würde jetzt für " << rSchritt->getMenge() << "sec gemischt werden" << endl;
            m_Mischer->mischen(rSchritt->getMenge());
        }
        else if(rSchritt->getZutat() == "Stampfen"){
            cout << "Hier würde jetzt für " << rSchritt->getMenge() << "sec gestampft werden" << endl;
            m_Stampfer->stampfen(rSchritt->getMenge());
        }
        else{
            cout << "Hier würden jetzt " << rSchritt->getMenge() << "g an " << rSchritt->getZutat() << " dosiert werden" << endl;
            //TODO implementieren der Dosierung
        }
    }
}

