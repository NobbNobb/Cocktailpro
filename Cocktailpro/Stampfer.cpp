/**
 * @(#) Stampfer.cpp
 */


#include "Stampfer.h"

Stampfer::Stampfer(Zeit* zeit){
    m_Zeit = zeit;
}

Stampfer::~Stampfer(){   
}

/*-----------------------Funktionen-----------------------*/

void Stampfer::stampfen(float zeit){
    cout << endl << "Cocktail wird gestampft. Bitte warten: ";
    for(int i = 0; i < zeit; i++){
        cout << "*";
        cout.flush();               //Output erzwingen
        m_Zeit->sleep(1000);        //Eine Sekunde warten
    }
    cout << endl;
}

