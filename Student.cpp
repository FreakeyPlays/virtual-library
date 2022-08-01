#include "Student.hpp"
#include <iostream>

Student::Student(string name, int matNr)
	: Person(name, 30)
	, matNr(matNr)
{
}

void Student::print() const
{
	Person::print();
	cout << "matNr" << matNr;
}
