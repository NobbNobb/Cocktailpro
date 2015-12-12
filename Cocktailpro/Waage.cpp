/**
 * @(#) Waage.cpp
 */


#include "Waage.h"
#include "Zeit.h"

Waage::Waage(Zeit* zeit){
    m_Zeit = zeit;
    m_Gewicht = 0;
    m_DeltaGewicht = 0;
}

Waage::~Waage(){   
}

/*-----------------------Getter-----------------------*/

float Waage::getDeltaGewicht() const{
    return m_DeltaGewicht;
}

float Waage::getGewicht() const{
    return m_Gewicht;
}

Zeit* Waage::getZeit() const{
    return m_Zeit;
}

/*-----------------------Setter-----------------------*/

void Waage::setDeltaGewicht(float deltaGewicht){
    m_DeltaGewicht = deltaGewicht;
}

void Waage::setGewicht(float gewicht){
    m_Gewicht = gewicht;
}

/*-----------------------Funktionen-----------------------*/

void Waage::addGewicht(float gewicht){
    m_DeltaGewicht += gewicht;          //Gewicht auf das Delta-Gewicht addieren
    m_Gewicht += gewicht;               //Gewicht auf das Absolut-Gewicht addieren
}

void Waage::showGewicht(){
    if(m_DeltaGewicht < 0){             //Prüfen ob das Delta-Gewicht negativ ist
        m_DeltaGewicht = 0;             //Delta-Gewicht auf "0" setzen
    }
    if(m_Gewicht < 0){                  //Prüfen ob das Absolut-Gewicht negativ ist
        m_Gewicht = 0;                  //Absolut-Gewicht auf "0" setzen
    }
    cout << "Absolute: " << m_Gewicht << "g | Delta: " << m_DeltaGewicht << "g" << endl; //Ausgabe beider Gewichtsvariablen
}
