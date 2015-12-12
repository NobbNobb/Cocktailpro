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
        /**
         * Standardkonstruktor zum erstellen des Zeit-Objektes
         */
        Zeit();
        
        /**
         * Standarddestruktor
         */
        virtual ~Zeit();
        
        /*-----------------------Getter-----------------------*/
        
        /**
         * gibt den Modus zurück in dem das Zeit-Objekt ist
         * @return true oder false (true = 10-tel Sekunde, false = 1 Sekunde)
         */
        bool getModus() const;
        
        /*-----------------------Setter-----------------------*/
        
        /**
         * setzt den Modus des Zeit-Objektes
         * @param modus
         */
        void setModus(bool modus);
        
        /*-----------------------Funktionen-----------------------*/
        
        /**
         * wartet eine bestimmte Zeit ab
         * @param zeit Dauer wie lange gewartet werden soll
         */
        void sleep(long zeit);
        
    private:
        /**
         *  Wertung der zeit (false = 1 Sekunde, true = 10-tel Sekunde)
         */
        bool Modus;
};

#endif	/* ZEIT_H */

