/*
adresse.cpp
Marcel Kroth 14.12.2016
*/

#include "adresse.h"


Adresse::Adresse(string StraßeNr, string PLZStadt)
{
	this->StraßeNr = StraßeNr;
	this->PLZStadt = PLZStadt;
}


Adresse::Adresse(const Adresse& p)
{
	if (this != &p) *this = p;
}

const Adresse& Adresse::operator = (const Adresse& p)
{
	if (this != &p)
	{
		this->StraßeNr = p.StraßeNr;
		this->PLZStadt = p.PLZStadt;
	}
	return *this;
}

ostream& operator<<(ostream& s, const Adresse& p)
{
	ostream& cs = cout;
	if (typeid(s) == typeid(cs))
		s << "Adresse \n" << p.StraßeNr << "\n" << p.PLZStadt << "\n";
	else
		s.write((const char*)&p, sizeof(p));
	return s;
}

istream& operator>>(istream& s, Adresse& p)
{
	istream& cs = cin;
	if (typeid(s) == typeid(cs))
		s >> p.StraßeNr >> p.PLZStadt;
	else
		s.read((char*)&p, sizeof(p));
	return s;
}
