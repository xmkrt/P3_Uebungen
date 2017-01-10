/*
adresse.cpp
Marcel Kroth 14.12.2016
*/

#include "adresse.h"


Adresse::Adresse(string Stra�eNr, string PLZStadt)
{
	this->Stra�eNr = Stra�eNr;
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
		this->Stra�eNr = p.Stra�eNr;
		this->PLZStadt = p.PLZStadt;
	}
	return *this;
}

ostream& operator<<(ostream& s, const Adresse& p)
{
	ostream& cs = cout;
	if (typeid(s) == typeid(cs))
		s << "Adresse \n" << p.Stra�eNr << "\n" << p.PLZStadt << "\n";
	else
		s.write((const char*)&p, sizeof(p));
	return s;
}

istream& operator>>(istream& s, Adresse& p)
{
	istream& cs = cin;
	if (typeid(s) == typeid(cs))
		s >> p.Stra�eNr >> p.PLZStadt;
	else
		s.read((char*)&p, sizeof(p));
	return s;
}
