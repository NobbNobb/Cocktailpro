/**
 * @(#) Mischer.cpp
 */


#include "Mischer.h"

Mischer::Mischer(){
    
}

Mischer::Mischer(Zeit* zeit){
    m_Zeit = zeit;
}

Mischer::~Mischer(){
    
}

/*-----------------------Funktionen-----------------------*/

void Mischer::mischen(float zeit)
{
    cout << endl << "Cocktail wird gemischt. Bitte warten: ";
    for(int i = 0; i < zeit; i++){
        cout << "*";                    
        cout.flush();               //Output erzwingen
        m_Zeit->sleep(1000);        //Eine Sekunde warten
    }
    cout << endl;
}

