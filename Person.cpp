#include "Person.hpp"
#include <iostream>

Person::Person(string name, int dauer)
	:name(name)
	, ausleihdauer(dauer)
{
}

string Person::getName() const
{
	return name;
}

int Person::getAusleihdauer() const
{
	return  ausleihdauer;
}

void Person::print() const
{
	cout << name;
}
