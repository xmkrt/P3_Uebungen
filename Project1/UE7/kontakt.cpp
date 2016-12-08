/*
kontakt.cpp

*/

#include "kontakt.h"

Kontakt::Kontakt(int id, char * name, string vorname, string telefonnr)
{
	this->id = id;
	this->name = name;
	this->vorname = vorname;
	this->telefonnr = telefonnr;
}

Kontakt::Kontakt(const Kontakt& p)
{
	if (this != &p) *this = p;
}


std::ostream& operator<<(std::ostream& s, const Kontakt& p)
{
	s << "ID: " << p.id << "\nName: " << p.name << " " << p.vorname << "\nTel.: " << p.telefonnr << "\n";
	return s;
}

istream & operator >> (istream & s, Kontakt& p)
{
	s >> p.id >> p.vorname >> p.name >> p.telefonnr;
	return s;
}
