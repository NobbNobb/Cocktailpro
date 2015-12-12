/**
 * @(#) Stampfer.h
 */

#ifndef STAMPFER_H_H
#define STAMPFER_H_H

#include "Zeit.h"

using namespace std;

/**
 * Der Stampfer stampft für eine definierte Zeitdauer
 * */
class Stampfer
{
	
public:
        Stampfer();
        Stampfer(Zeit* zeit);
        virtual ~Stampfer();
	/**
	 * 
	 * */
	void stampfen(float zeit);

private:
    Zeit* m_Zeit;
};

#endif
