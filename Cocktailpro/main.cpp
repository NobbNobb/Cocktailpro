/**
 * File:   main.cpp
 * Author: istmiwolf
 *
 * Created on 19. November 2015, 15:44
*/

#include <cstdlib>
#include "GUI.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    cout << "CocktailPro Beta v0.7"<<endl;
    GUI ctp;
    ctp.init();
    ctp.menue();
}

