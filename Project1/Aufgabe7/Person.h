#pragma once

#include <iostream>
#include "Kontakt.h"
#include <string>
#include "Adresse.h"
using namespace std;

class Person : public Kontakt
{
private:
	string beruf;
	Adresse adresse;
public:
	//copy
	Person(const Person& p);
	//default
	Person(const string name = "Horst", const int geburtsjahr = 1950, const string beruf = "Schreiner", const string stadt = "Berlin");

	Person(const string beruf, const Kontakt &k, const Adresse& a);

	string getBeruf() const
	{
		return beruf;
	}
	void setBeruf(const string beruf)
	{
		this->beruf = beruf;
	}

	Adresse getAdresse() const
	{
		return adresse;
	}

	void setAdresse(const Adresse adresse)
	{
		this->adresse = adresse;
	}	

	~Person() {}

	void setKontakt(const Kontakt k);
	Kontakt getKontakt() const;

	friend ostream& operator << (ostream& s, const Person& p);
};