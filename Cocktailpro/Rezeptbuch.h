/**********************************************************************************/
/*                                Deklarationsmodul                               */
/**********************************************************************************/
/*
 * Repository : RezeptbuchV6
 * Modell     : Rezeptbuch
 * Benutzer   : RaHa
 * File       : Rezeptbuch.h
 *
 */


#ifndef _REZEPTBUCH_H_489
#define _REZEPTBUCH_H_489

#include "string.h"
#include <list>
#include <string>


/*Jeder Rezeptsschritt hat eine Zutat und eine Menge. Das wird frei interpretiert, d.h. eine Zutat kann auch "Mixen" sein. Die Menge bezieht sich dann auf die Zeit (20 = 20 Sekunden)
 * */
class Rezeptschritt
{
   /*Der Name der Zutat */
	std::string m_Zutat;

   /*Die Menge der Zutat - das können Sekunden, Stück oder Gramm sein */
	float m_Menge;

   public:
	/*Konstruktor */
	Rezeptschritt( void );

   /*Destruktor */
	~Rezeptschritt( );

   /*Liefert die Zutat des Rezeptschrittes */
	std::string getZutat( void ) const;

   /*Liefert den Wert des Rezeptschrittes (die Menge) */
	float getMenge( void ) const;

   /*Setzt die Zutat des Rezeptschrittes */
	void setZutat( std::string m_Zutat );

   /*Setzt den Wert des Rezeptschrittes (die Menge) */
	void setMenge( float m_Menge );

};


/*Ein Rezept hat einen Namen und verwaltet eine beliebig lange Liste von Rezeptschritten.
 * */
class Rezept
{
   /*Jedes Rezept besteht aus vielen Rezeptschritten. Die werden hier (geordnet) in einer Liste abgelegt.
	 * */
	std::list<Rezeptschritt> m_Rezeptschritte;

   /*Der Name des Rezeptes */
	std::string m_Name;

   public:
	/*Konstruktor - legt ein Rezept an. */
	Rezept( void );

   /*Destruktor. Löscht ein Rezept inklusive der enthaltenen Rezeprtschritte. */
	~Rezept( );


   /*Liefert die Anzahl der Rezeptschritte */
	int getAnzahlRezeptschritte( );

   /*Liefert einen Verweis auf den i-ten Rezeptschritt (0..n-1).
	 *Sonst wird eine NULL geliefert.
	 * */
	Rezeptschritt * getRezeptSchritt( unsigned int i );

   /*Liefert den Namen des Rezeptes */
	std::string getName( void ) const;

   /*Setzt den Namen des Rezeptes */
	void setName( std::string Name );

   /*Erzeugt einen neuen Rezeptschritt mit der übergebenen Zutat und der Menge und hängt den an die Liste der Schritte an.
	 * */
	void appendStep( std::string z, float m );

};

/*Das Rezeptbuch kennt eine Liste von Rezepten. Es bietet die Möglichkeit Rezepte zu suchen und abzufragen. Das Initialisieren der Rezepte erfolgt über den Dateileser.
 * */
class Rezeptbuch
{
   /*Ein Rezeptbuch besteht aus vielen Rezepten - diese werden als eine Liste abgelegt.
	 * */
	std::list<Rezept *> m_Rezepte;

   public:
	/*Konstruktor; legt temporär einen Initialisierer an, damit dieser die Liste auffüllt.
	 * */
	Rezeptbuch( void );

   /*Destruktor. Löscht insbesondere den Initialisierer */
	~Rezeptbuch( );

   /*Liefert die Anzahl der verfügbaren Rezepte. */
	int getAnzahlRezepte( );

   /*Liefert das i-te Rezept aus der Liste (Werte von 0..n-1).
	 *Ansonsten NULL.
	 * */
	Rezept * getRezept( unsigned int i );
   /*Löscht das i-te Rezept. Liefert bei Erfolg true, sonst false. */
	bool deleteRezept( unsigned int i );

};

#endif
