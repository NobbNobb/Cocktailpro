/**
 * @(#) Gefilltertes_Rezeptbuch.cpp
 */


#include "Gefilltertes_Rezeptbuch.h"

/**
 * 
 */
Gefilltertes_Rezeptbuch::Gefilltertes_Rezeptbuch(){
}

Gefilltertes_Rezeptbuch::~Gefilltertes_Rezeptbuch(){
}

/*-----------------------Funktionen-----------------------*/

void Gefilltertes_Rezeptbuch::filtern(vector<string> zutaten)
{
    Rezept* rezept;                                                     //Rezept-Objekt erstellen
    Rezeptschritt* rSchritt;                                            //Rezeptschritt-Objekt erstellen                                       //
    string zutat;
    bool enthalten = false;
    bool loeschen = false;
    
    for(int i = 0; i < getAnzahlRezepte(); i++){                        //Alle Rezepte durchlaufen
        rezept = getRezept(i);                                          //Rezept speichern
        for(int j = 0; j < rezept->getAnzahlRezeptschritte(); j++){     //Alle Rezeptschritte durchlaufen
            rSchritt = rezept->getRezeptSchritt(j);                     //Rezeptschritt speichern
            zutat = rSchritt->getZutat();                               //Zutat speichern
            loeschen = false;                                           //loeschen zurücksetzen
            enthalten = false;                                          //enthalten zurücksetzen
            for( int k = 0; k < zutaten.size(); k++){                   //Alle verfügbaren Zutaten durchlaufen
                if(zutaten.at(k) == zutat){                             //Zutaten vergelciehn
                    enthalten = true;                                   //Zutat ist enthalten
                    break;
                }
                else if(zutat == "Stampfen"){                           //Prüfen ob die Zutat "Stampfen" ist
                    enthalten = true;                                   //Zutat ist enthalten
                    break;
                }
                else if(zutat == "Mischen"){                            //Prüfen ob die Zutat "Mischen" ist
                    enthalten = true;                                   //Zutat ist enthalten
                    break;
                }
            }
            if(!enthalten){                                             //Prüfen ob eine Zutat nicht enthalten war
                loeschen = true;                                        //Rezept zum löschen merken
                break;
            }
        }
        if(loeschen){                                                   //Prüfen ob Rezept gelöscht werden muss
            deleteRezept(i);                                            //Rezept löschen
            i--;                                                        //Schleifenzähler anpassen
        }
    }
}

