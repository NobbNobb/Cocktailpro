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

//Zeit::Zeit(const Zeit& orig) {
//}

Zeit::~Zeit() {
}

void Zeit::setModus(bool modus){
    Modus = modus;
}

bool Zeit::getModus() const{
    return Modus;
}

void Zeit::sleep(long zeit){
    clock_t limit;
    clock_t now = clock();
    if(Modus){
        limit = now + zeit * CLOCKS_PER_SEC / 10000;
    }
    else{
        limit = now + zeit * CLOCKS_PER_SEC / 1000;
    }
    while(limit > now){
        now = clock();
    }
}

