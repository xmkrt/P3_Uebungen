/*
adresse.h
Marcel Kroth 14.12.2016
*/
#ifndef _H_ADRESSE
#define _H_ADRESSE

#include <iostream>
#include <string>
#include <fstream>
#include <typeinfo>

using namespace std;

class Adresse
{
private:
	string StraßeNr;
	string PLZStadt;;
public:
	// Methoden
	Adresse(string StraßeNr = "", string PLZStadt = "");
	Adresse(const Adresse& p);

	void setStadt(string stadt);

	void setStraßeNr(string StraßeNr)
	{
		if (StraßeNr != "")
			this->StraßeNr = StraßeNr;
	}
	string getStraßeNr() const { return StraßeNr; }

	void setPLZStadt(string PLZStadt)
	{
		if (PLZStadt != "")
			this->PLZStadt = PLZStadt;

	}

	string getPLZStadt() const { return  PLZStadt; }


	const Adresse& operator = (const Adresse& p);
	friend ostream & operator << (ostream & s, const Adresse& p);
	friend istream & operator >> (istream & s, Adresse& p);
};

#endif // !_H_ADRESSE
