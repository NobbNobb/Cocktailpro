/**
 * @(#) Dosierer_Verwaltung.cpp
 */


#include "Dosierer_Verwaltung.h"
#include <vector>
#include <fstream>
#include <iostream>

using namespace std;

/**
 * 
 */
Dosierer_Verwaltung::Dosierer_Verwaltung(){
}

/**
 * 
 */
Dosierer_Verwaltung::~Dosierer_Verwaltung(){
}


/**
 * 
 * */
void Dosierer_Verwaltung::dateiLaden()
{
    cout << "Starte einlesen der Zutaten..." << endl;
    string word, filename = "zutaten.txt";
    ifstream load;
    load.open(filename.c_str(), ios::in);
    if(!load){
        cerr << filename << " wurde nicht gefunden!" << endl;
        return;
    }
    while(!load.eof()){
        getline(load, word);
        Zutaten.push_back(word);
        if(word == "Limettenstücke" || word == "Eis"){
            Dosierer* dosierer = new Dosierer(word, false);
            m_Dosierer.push_back(dosierer);
        }
        else{
            Dosierer* dosierer = new Dosierer(word, true);
            m_Dosierer.push_back(dosierer);
        }
    }
    load.close();
    cout << "Zutaten wurden erfolgreich eingelesen." << endl;
}

/**
 * 
 * */
std::vector<std::string> Dosierer_Verwaltung::getZutaten() const
{
	return Zutaten;
}


/**
 * 
 * */
vector<Dosierer*> Dosierer_Verwaltung::getM_Dosierer() const
{
	return m_Dosierer;
}

