#include "klasse.h"

Computer::Computer(int Baujahr, float Taktrate)
{
	this->Baujahr = Baujahr;
	this->Taktrate = Taktrate;
}

Computer::Computer(const Computer & p)
{
	if (this != &p) *this = p;
}

const Computer & Computer::operator=(const Computer & p)
{
	if (this != &p)
	{
		this->Baujahr = p.Baujahr;
		this->Taktrate = p.Taktrate;
	}
	return *this;
}

ostream & operator<<(ostream & s, const Computer & p)
{
	s << "Baujahr: " << p.Baujahr << "\n Taktrate: " << p.Taktrate << "\n";
	return s;
}

istream & operator >> (istream & s, Computer & p)
{
	istream& cs = cin;
	s >> p.Baujahr >> p.Taktrate;
	return s;
}
