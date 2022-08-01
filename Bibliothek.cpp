#include "Bibliothek.hpp"
#include <string>
#include <iostream>

// Standardkonstruktor
Bibliothek::Bibliothek(int maxAnz)
	: anz(0), maxAnz(maxAnz)
{
	medien = new Medium *[maxAnz];
}

// Destruktor
Bibliothek::~Bibliothek()
{
	for (int i = 0; i < anz; i++)
	{
		delete medien[i];
	}

	delete[] medien;
}

// Medium in den Katalog eintragen
void Bibliothek::mediumBeschaffen(Medium &m)
{
	this->medien[this->anz] = m.clone();
	anz++;
}

// alle Medien auf der Konsole ausgeben,
// die im Titel das Suchwort enthalten
void Bibliothek::mediumSuchen(string suchwort)
{
	cout << endl
		 << endl
		 << "Suche nach \"" << suchwort << "\" Ergebnis:" << endl;
	for (int i = 0; i < anz; i++)
	{
		auto *p = medien[i];
		if (p->getTitel().find(suchwort) != string::npos)
		{
			cout << "Medium " << i << ":" << endl;
			p->print();
		}
	}
}

// im Medium mit der Nummer nr, die Person p als Ausleiher
// eintragen mit von-Datum d und bis-Datum d+p.ausleihdauer
void Bibliothek::mediumAusleihen(int nr, Person &p, Datum d)
{
	if (medien[nr] != nullptr)
	{
		if (medien[nr]->getAusleiher() == nullptr)
		{
			medien[nr]->ausleihen(p, d, d + p.getAusleihdauer());
		}
		else
		{
			cout << "Bereits ausgeliehen" << endl;
		}
	}
	else
	{
		cout << "nicht vorhanden!" << endl;
	}
}

// alle Medien in der Konsole ausgeben
void Bibliothek::print() const
{
	cout << endl;
	cout << endl;
	cout << "Bibliothekskatalog:" << endl;

	for (int i = 0; i < anz; i++)
	{
		auto p = medien[i];
		p->print();
	}
}