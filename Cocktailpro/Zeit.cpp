/* 
 * File:   Zeit.cpp
 * Author: fs
 * 
 * Created on 12. Dezember 2015, 16:05
 */

#include "Zeit.h"

Zeit::Zeit() {
    Modus = false;
}

Zeit::~Zeit() {
}

/*-----------------------Getter-----------------------*/

bool Zeit::getModus() const{
    return Modus;
}

/*-----------------------Setter-----------------------*/

void Zeit::setModus(bool modus){
    Modus = modus;
}

/*-----------------------Funktionen-----------------------*/

void Zeit::sleep(long zeit){
    clock_t limit;              //Zeit des Ende
    clock_t now = clock();      //aktuelle Zeit
    if(Modus){
        limit = now + zeit * CLOCKS_PER_SEC / 10000;
    }
    else{
        limit = now + zeit * CLOCKS_PER_SEC / 1000;
    }
    while(limit > now){         //Prüfen ob das Ende erreicht wurde
        now = clock();          //neue aktuelle Zeit holen
    }
}

