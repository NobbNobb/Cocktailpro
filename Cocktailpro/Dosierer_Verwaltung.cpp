/**
 * @(#) Dosierer_Verwaltung.cpp
 */


#include "Dosierer_Verwaltung.h"

Dosierer_Verwaltung::Dosierer_Verwaltung(){
}

Dosierer_Verwaltung::~Dosierer_Verwaltung(){
}

/*-----------------------Getter-----------------------*/

vector<string> Dosierer_Verwaltung::getZutaten() const{
    return m_Zutaten;
}

vector<Dosierer*> Dosierer_Verwaltung::getM_Dosierer() const{
    return m_Dosierer;
}

/*-----------------------Funktionen-----------------------*/

void Dosierer_Verwaltung::dateiLaden(){
    cout << "Starte einlesen der Zutaten..." << endl;
    string word, filename = "zutaten.txt";                 //deklarieren und initialisieren der Variabeln
    ifstream load;                                         //deklarieren des filestreams
    load.open(filename.c_str(), ios::in);                  //Zutaten in den filestream laden
    if(!load){                                             //Prüfen ob das laden erfolgreich war
        cerr << filename << " wurde nicht gefunden!" << endl;
        return;
    }
    while(!load.eof()){                                    
        getline(load, word);                               //Zutat aus dem filestream holen
        m_Zutaten.push_back(word);                         //Zutat in den Vektor schieben
        if(word == "Limettenstuecke" || word == "Eis"){     //Prüfen ob die Zutat "Limettenstücke" oder "Eis" ist 
            Dosierer* dosierer = new Dosierer(word, false);//Dosierer-Objekt erstellen 
            m_Dosierer.push_back(dosierer);                //Dosierer in den Vektor schieben 
        }
        else{
            Dosierer* dosierer = new Dosierer(word, true); //Dosierer-Objekt erstellen
            m_Dosierer.push_back(dosierer);                //Dosierer in den Vektor schieben
        }
    }
    load.close();                                          //filestream wieder schließen 
    cout << "Zutaten wurden erfolgreich eingelesen." << endl;
}