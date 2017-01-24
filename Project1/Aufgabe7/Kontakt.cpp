#include "Kontakt.h"

Kontakt::Kontakt(string name, int geburtsjahr)
{
	this->setName(name);
	this->setGeburtsjahr(geburtsjahr);
}

ostream& operator << (ostream& s, const Kontakt& k)
{
	s << k.getName << endl << k.getGeburtsjahr;
	return s;
}
