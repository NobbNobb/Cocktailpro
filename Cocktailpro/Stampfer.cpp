/**
 * @(#) Stampfer.cpp
 */


#include "Stampfer.h"
#include <iostream>

Stampfer::Stampfer(){
    
}
Stampfer::Stampfer(Zeit* zeit){
    m_Zeit = zeit;
}

Stampfer::~Stampfer(){
    
}

/**
 * 
 * */
void Stampfer::stampfen(float zeit)
{
    cout << endl << "Cocktail wird gestampft. Bitte warten: ";
    for(int i = 0; i < zeit; i++){
        cout << "*";
        cout.flush();
        m_Zeit->sleep(1000);
    }
    cout << endl;
}

