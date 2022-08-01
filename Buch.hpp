// Buch.hpp
#pragma once

#include "Medium.hpp"

// Klasse f�r die B�cher als Spezialisierung von Medium
class Buch : public Medium
{
	// Autor(en) des Buches
	string autor;

public:
	// Standardkonstruktor
	Buch(string t = "", string a = "", string v = "", int jahr = 0);
	// das Buch auf der Konsole ausgeben
	void print() const;
	Buch *clone() const;
};
