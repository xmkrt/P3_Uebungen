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
	string Stra�eNr;
	string PLZStadt;;
public:
	// Methoden
	Adresse(string Stra�eNr = "", string PLZStadt = "");
	Adresse(const Adresse& p);

	void setStadt(string stadt);

	void setStra�eNr(string Stra�eNr)
	{
		if (Stra�eNr != "")
			this->Stra�eNr = Stra�eNr;
	}
	string getStra�eNr() const { return Stra�eNr; }

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
