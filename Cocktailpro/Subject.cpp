/**
 * @(#) Subject.cpp
 */


#include "Subject.h"
#include <algorithm>
#include <iostream>
/**
 * 
 */
void Subject::attach(Observer *observer)
{
    observers.push_back(observer);
}

/**
 * 
 */
void Subject::notify()
{
    for(int i = 0; i < observers.size(); i++){
        observers.at(i)->update();
    }
}

/**
 * 
 */
void Subject::detach(Observer *observer)
{
    vector<Observer*>::iterator iter = remove(observers.begin(), observers.end(), observer);
    observers.erase(iter, observers.end());
}

