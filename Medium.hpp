// Medium.hpp
#pragma once

#include <string>
#include "Datum.hpp"
#include "Person.hpp"
using namespace std;

// Klasse f�r die Medien, die in der Bibliothek ausgeliehen werden
// k�nnen
class Medium
{
	// Titel des Mediums
	const string titel;
	// Verlag, der das Medium herausgibt
	const string verlag;
	// Jahr, in dem das Medium ver�ffentlicht wurde
	const int jahr;
	// ausgeliehen von
	Person *ausleiher;
	// ausgeliehen am
	Datum von;
	// ausgeliehen bis
	Datum bis;

public:
	// Konstruktor
	Medium(string t = "", string v = "", int j = 0, string typ = "undef");
	// Titel zur�ckliefern
	string getTitel() const;
	// Typ zur�ckliefern
	//string getTyp() const;
	// Ausleiher zur�ckliefern
	Person *getAusleiher() const;
	// das Mediuem "ausleihen", d.h. Person p, von und bis eintragen
	void ausleihen(Person &p, Datum von, Datum bis);
	// Medium in der Konsole ausgeben
	virtual void print() const;
	virtual Medium *clone() const = 0;
};
