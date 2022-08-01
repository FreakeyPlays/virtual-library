#include "Datum.hpp"
#include <iostream>
#include <sstream>

Datum::Datum(int t, int m, int j)
	: tag(t), monat(m), jahr(j)
{
}

Datum::Datum(const string& str)
{
	char c;
	stringstream ss(str);
	ss >> tag >> c >> monat >> c >> jahr;
}

Datum::Datum(const char* cStr)
	: Datum(string(cStr))
{
}

Datum Datum::operator+(int tage)
{
	int absDate = tag + monat * 30 + jahr * 360;
	absDate += tage;
	int j = absDate / 360;
	absDate = absDate % 360;
	int m = absDate / 30;
	absDate = absDate % 30;
	int t = absDate;

	return Datum(t, m, j);
}

ostream& operator<<(ostream& os, const Datum& d)
{
	os << d.tag << "." << d.monat << "." << d.jahr;
	return os;
}
