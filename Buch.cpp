#include "Buch.hpp"
#include <iostream>
#include <iomanip>

Buch::Buch(string t, string a, string v, int jahr)
	: Medium(t, v, jahr, "Buch"), autor(a)
{
}

void Buch::print() const
{
	using namespace std;
	Medium::print();
	cout << std::setw(15) << left << "Author : " << autor << endl;
}

Buch *Buch::clone() const
{
	return new Buch(*this);
}