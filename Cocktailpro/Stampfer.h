/**
 * @(#) Stampfer.h
 */

#ifndef STAMPFER_H_H
#define STAMPFER_H_H

/**
 * Der Stampfer stampft für eine definierte Zeitdauer
 * */
class Stampfer
{
	
public:
        Stampfer();
        virtual ~Stampfer();
	/**
	 * 
	 * */
	void stampfen(float zeit);
	
};

#endif
