/* 
 * File:   Zeit.h
 * Author: fs
 *
 * Created on 12. Dezember 2015, 16:05
 */

#ifndef ZEIT_H
#define	ZEIT_H

#include <ctime>

using namespace std;

class Zeit {
public:
    Zeit();
//    Zeit(const Zeit& orig);
    virtual ~Zeit();
    
    void sleep(long zeit);
    void setModus(bool modus);
    bool getModus() const;
private:
    bool Modus; // 0 = 1 Sekunde, 1 = 10-tel Sekunde
};

#endif	/* ZEIT_H */

