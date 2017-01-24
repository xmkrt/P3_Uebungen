#include "Person.h"

Person::Person(const Person & p)
{
	this->setName(p.getName());
	this->setGeburtsjahr(p.getGeburtsjahr());
	this->setAdresse(p.getAdresse());
	this->setBeruf(p.getBeruf());
}

Person::Person(const string name, const int geburtsjahr, const string beruf, const string stadt) : Kontakt(name, geburtsjahr)
{
	this->setBeruf(beruf);
	this->setGeburtsjahr(geburtsjahr);
	this->setName(name);
	this->adresse = Adresse::Adresse(stadt);
}

Person::Person(const string beruf, const Kontakt & k, const Adresse & a)
{
	this->setKontakt(k);
	this->setAdresse(a);
	this->setBeruf(beruf);
}

ostream & operator<<(ostream & s, const Person & p)
{
	s << (Kontakt)p << endl << p.getBeruf() << endl << p.getAdresse();
	return s;
}
