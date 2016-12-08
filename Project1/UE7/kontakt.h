/*
Kontakt

*/


#ifndef _H_KONTAKT
#define _H_KONTAKT

#include <iostream>
#include <string>
using namespace std;

struct Kontakt
{
public:
	char * name;
	string vorname;
	string telefonnr;
	int id;
	// Methoden
	Kontakt(int id = 0, char * name = "", string vorname = "", string telefonnr = "");

	Kontakt(const Kontakt& p);
	~Kontakt() {}
	friend ostream & operator << (ostream & s, const Kontakt& p);
	friend istream & operator >> (istream & s, Kontakt& p);
};
#endif // !_H_Kontakt

