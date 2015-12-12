/**
 * @(#) Subject.cpp
 */


#include "Subject.h"
/**
 * 
 */
void Subject::attach(Observer *observer)
{
    observers->push_back(observer);
}

/**
 * 
 */
void Subject::notify()
{
    vector<Observer*>::iterator iter = observers->begin();
    for(; iter != observers->end(); iter++){
        (*iter)->update();
    }
}

/**
 * 
 */
void Subject::detach(Observer *observer)
{
	
}

