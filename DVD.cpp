#include "DVD.hpp"
#include <iostream>
#include <iomanip>

DVD::DVD(string t, string v, int j, int d)
	: Medium(t, v, j, "DVD"), dauer(d)
{
}

void DVD::print() const
{
	using namespace std;
	Medium::print();
	if (dauer > 0)
	{
		cout << std::setw(15) << left << "Dauer : " << dauer << endl;
	}
}

DVD *DVD::clone() const
{
	return new DVD(*this);
}