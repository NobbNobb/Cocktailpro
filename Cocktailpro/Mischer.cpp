/**
 * @(#) Mischer.cpp
 */


#include "Mischer.h"
#include <iostream>

Mischer::Mischer(){
    
}

Mischer::Mischer(Zeit* zeit){
    m_Zeit = zeit;
}

Mischer::~Mischer(){
    
}
/**
 * 
 */
void Mischer::mischen(float zeit)
{
    cout << endl << "Cocktail wird gemischt. Bitte warten: ";
    for(int i = 0; i < zeit; i++){
        cout << "*";
        cout.flush();
        m_Zeit->sleep(1000);
    }
    cout << endl;
}

