/**
 * @(#) Subject.cpp
 */


#include "Subject.h"

void Subject::attach(Observer *observer)
{
    observers.push_back(observer);                  //Observer dem Vektor hinzufügen
}

void Subject::notify()
{
    for(int i = 0; i < observers.size(); i++){      //Alle Observer im Verktor durchlaufen
        observers.at(i)->update();                  //update auf Observer aufrufen
    }
}

void Subject::detach(Observer *observer)
{
    vector<Observer*>::iterator iter = remove(observers.begin(), observers.end(), observer); //Iterator des zu löschenden Observers suchen
    observers.erase(iter, observers.end());                                                  //Observer aus dem Vektor entfernen anhand des Iterators
}

