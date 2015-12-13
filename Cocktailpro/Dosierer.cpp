/**
 * @(#) Dosierer.cpp
 */


#include "Dosierer.h"

Dosierer::Dosierer(string zutat, bool typ){
    m_Zutat = zutat;
    m_Typ = typ;
    m_Zustand = false;
    m_Durchfluss = 0;
}

Dosierer::~Dosierer(){
}

/*-----------------------Getter-----------------------*/

string Dosierer::getZutat() const{
    return m_Zutat;
}

bool Dosierer::getZustand() const{
    return m_Zustand;
}

bool Dosierer::getTyp() const{
    return m_Typ;
}

/*-----------------------Setter-----------------------*/

void Dosierer::setSubject(Waage* waage){
    m_Subject = waage;
}

void Dosierer::setZustand(bool zustand){
    m_Zustand=zustand;
}

void Dosierer::setDurchfluss(float menge){
    m_Durchfluss = menge;
}

/*-----------------------Funktionen-----------------------*/

void Dosierer::dosieren(float menge){
    setDurchfluss(menge);                //Zu dosierende Menge speichern
    m_Subject->setDeltaGewicht(0);       //Delta Gewicht zurücksetzen
    m_Subject->attach(this);             //Observer anmelden
    setZustand(true);                    //Ventil öffnen
    cout << endl << "Ventil von Dosierer \"" << getZutat() << "\" geöffnet." << endl;
    m_Subject->showGewicht();            //Gewicht ausgeben
    while(getZustand()){                 //Prüfen ob das Ventil offen ist
        if(!getTyp()){                   //Prüfen welche Art von Dosierer vohanden ist
            //Stückdosierer
            if(getZutat() == "Limettenstücke"){
                m_Subject->addGewicht(10);           //Gewicht hinzufügen
            }
            else{
                m_Subject->addGewicht(20);           //Gewicht hinzufügen
            }
        }
        else{
            //normaler Dosierer
            m_Subject->addGewicht(1);                //Gewicht hinzufügen
        }
    }
    m_Subject->detach(this);             //Observer abmelden
    cout << endl;
}

void Dosierer::update(){
    m_Subject->showGewicht();                           //Gewicht ausgeben
    if(m_Subject->getDeltaGewicht() >= m_Durchfluss){   //Prüfen ob die zu dosierende Menge erreicht wurde
        setZustand(false);                              //Ventil schließen
        cout << "Ventil von Dosierer \"" << getZutat() << "\" geschlossen.";
    };
}