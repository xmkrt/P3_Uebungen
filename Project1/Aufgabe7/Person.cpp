#include "Person.h"

Person::Person(const Person & p)
{
	*this = p;
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

void Person::setKontakt(Kontakt k)
{
	this->setName(k.getName);
	this->setGeburtsjahr(k.getGeburtsjahr);
}

Kontakt Person::getKontakt() const
{
	return Kontakt::Kontakt(this->getName,this->getGeburtsjahr);
}

ostream & operator<<(ostream & s, const Person & p)
{
	s << (Kontakt)p << endl << p.getBeruf() << endl << p.getAdresse();
	return s;
}
