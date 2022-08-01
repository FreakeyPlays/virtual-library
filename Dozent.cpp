#include "Dozent.hpp"
#include <iostream>

Dozent::Dozent(string name, int prfrNr)
	: Person(name, 90)
	, prfrNr(prfrNr)
{
}

void Dozent::print() const
{
	Person::print();
	cout << "prfrNr" << prfrNr << endl;
}
