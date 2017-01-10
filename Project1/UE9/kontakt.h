#pragma once
/*
Kontakt.h
*/

#include <iostream>
#include <string>
using namespace std;

class Kontakt
{
private:
	char * name;
	string vorname;
	string telefonnr;
	int id;
	// Methoden
public:
	Kontakt(int id = 0, char * name = "", string vorname = "", string telefonnr = "");

	Kontakt(const Kontakt& p);
	~Kontakt() {}
	friend ostream & operator << (ostream & s, const Kontakt& p);
	friend istream & operator >> (istream & s, Kontakt& p);
};


