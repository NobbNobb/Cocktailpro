/**
 * @(#) Mischer.h
 */

#ifndef MISCHER_H_H
#define MISCHER_H_H

#include "Zeit.h"

using namespace std;

/**
 * Der Mischer mischt für eine definierte Zeitdauer
 * */
class Mischer
{
	
public:
        Mischer();
        Mischer(Zeit* zeit);
        virtual ~Mischer();
	/**
	 * 
	 * */
	void mischen(float zeit);
	
private:
    Zeit* m_Zeit;
};

#endif
