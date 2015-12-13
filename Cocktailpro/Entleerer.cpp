/**
 * @(#) Entleerer.cpp
 */


#include "Entleerer.h"

Entleerer::Entleerer(Waage *waage){
    m_Subject = waage;
    m_Zustand = false;
}

Entleerer::~Entleerer(){   
}

/*-----------------------Getter-----------------------*/

bool Entleerer::getZustand() const{
    return m_Zustand;
}

/*-----------------------Setter-----------------------*/

void Entleerer::setZustand(bool zustand){
    m_Zustand=zustand;
}

/*-----------------------Funktionen-----------------------*/

void Entleerer::reinigen() const{
    cout << endl << "Cocktailbehälter wird gereinigt. Bitte warten: ";
    for(int i = 0; i < 10; i++){
        cout << "*";
        cout.flush();                             //Output erzwingen
        m_Subject->getZeit()->sleep(1000);        //Eine Sekunde warten
    }
    cout << endl;
}

void Entleerer::leeren(){
    m_Subject->setDeltaGewicht(m_Subject->getGewicht()); //DeltaGewicht auf Gewicht setzen
    m_Subject->attach(this);                           //Observer anmelden
    setZustand(true);                                //Ventil öffnen
    cout << endl << "Entleerventil geöffnet." << endl;
    m_Subject->showGewicht();                          //Gewicht ausgeben
    while(getZustand()){                             //Prüfen ob das Ventil offen ist
        m_Subject->addGewicht(-25);                    //negatives Gewicht hinzufügen (subGewicht))
        m_Subject->notify();                           //Alle Observer benachrichtigen
        m_Subject->getZeit()->sleep(1000);             //Eine Sekunde warten
    }
    m_Subject->detach(this);                           //Observer abmelden
}

void Entleerer::update(){
    m_Subject->showGewicht();                          //Gewicht ausgeben
    if(m_Subject->getDeltaGewicht() <= 0){             //Prüfen ob der Behälter leer ist
        setZustand(false);                           //Ventil schliesen
        cout << "Entleerventil geschlossen." << endl;
    };
}

