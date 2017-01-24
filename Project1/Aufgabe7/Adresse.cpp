#include "Adresse.h"

Adresse::Adresse(string stadt)
{
	this->setStadt(stadt);
}
Adresse::Adresse(const Adresse &a)
{
	*this = a;
}

ostream& operator << (ostream& s, const Adresse& a)
{
	s << a.getStadt;
}