#include "Medium.hpp"
#include <iostream>
#include <iomanip>

Medium::Medium(string t, string v, int j, string typ)
	: titel(t), verlag(v), jahr(j), ausleiher(nullptr)
{
}

string Medium::getTitel() const
{
	return titel;
}
// TODO
// string Medium::getTyp() const
// {
// 	return typ;
// }

Person *Medium::getAusleiher() const
{
	return ausleiher;
}

void Medium::ausleihen(Person &p, Datum von, Datum bis)
{
	ausleiher = &p;
	this->von = von;
	this->bis = bis;
}

void Medium::print() const
{
	cout << "----------------------------------------" << endl;
	//cout << typ << endl;
	cout << std::setw(15) << left << "Titel:" << titel << endl;
	cout << std::setw(15) << left << "Verlag:" << verlag << endl;
	cout << std::setw(15) << left << "Jahr: " << jahr << endl;

	cout << std::setw(15) << left << "Ausleiher: ";
	if (ausleiher != nullptr)
	{
		cout << ausleiher->getName();
		cout << "von: " << von << " bis: " << bis << endl;
	}
	else
	{
		cout << "kein" << endl;
	}
}
