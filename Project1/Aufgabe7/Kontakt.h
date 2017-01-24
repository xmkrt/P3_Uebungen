#pragma once

using namespace std;
#include <iostream>
#include <string>

class Kontakt {
private:
	string name;
	int geburtsjahr;
public:

	//default + Initialisierungskonstruktor
	Kontakt(const string name = "Horst", const int geburtsjahr = 1950);
	//copy
	Kontakt(const Kontakt& k);

	void setGeburtsjahr(const int geburtsjahr)
	{
		this->geburtsjahr = geburtsjahr;
	}

	int getGeburtsjahr() const {
		return geburtsjahr;
	}

	void setName(const string name)
	{
		this->name = name;
	}

	string getName() const {
		return name;
	}

	~Kontakt() {}

	friend ostream& operator << (ostream& s, const Kontakt& k);
};
