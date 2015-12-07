/**
 * @(#) Gefilltertes_Rezeptbuch.cpp
 */


#include "Gefilltertes_Rezeptbuch.h"
#include <iostream>

/**
 * 
 */
Gefilltertes_Rezeptbuch::Gefilltertes_Rezeptbuch(){
}
/**
 * 
 */
Gefilltertes_Rezeptbuch::~Gefilltertes_Rezeptbuch(){
}

/**
 * 
 * */
void Gefilltertes_Rezeptbuch::filtern(std::vector<std::string> zutaten)
{
    Rezept* rezept;
    Rezeptschritt* rSchritt;
    vector<string> loeschListe;
    string zutat;
    bool enthalten = false;
    bool loeschen = false;
    
    for(int i = 0; i < getAnzahlRezepte(); i++){
        rezept = getRezept(i);
        for(int j = 0; j < rezept->getAnzahlRezeptschritte(); j++){
            rSchritt = rezept->getRezeptSchritt(j);
            zutat = rSchritt->getZutat();
            loeschen = false;
            enthalten = false;
            for( int k = 0; k < zutaten.size(); k++){
                if(zutaten.at(k) == zutat){
                    enthalten = true;
                    break;
                }
                else if(zutat == "Stampfen"){
                    enthalten = true;
                    break;
                }
                else if(zutat == "Mischen"){
                    enthalten = true;
                    break;
                }
            }
            if(!enthalten){
                loeschen = true;
                break;
            }
        }
        if(loeschen){
            loeschListe.push_back(rezept->getName());
        }
    }
    for(int i = 0; i < loeschListe.size(); i++){
        for(int j = 0; j < getAnzahlRezepte(); j++){
            rezept = getRezept(j);
            if(loeschListe.at(i) == rezept->getName()){
                deleteRezept(j);
                break;
            }
        }
    }
}

