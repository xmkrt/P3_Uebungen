#pragma once

#include <string>
#include <iostream>
using namespace std;

class Adresse
{
private:
	string stadt;
public:

	Adresse(const string stadt = "Berlin");

	Adresse(const Adresse& a);

	~Adresse() {}

	void setStadt(const string stadt)
	{
		this->stadt = stadt;
	}
	string getStadt() const
	{
		return stadt;
	}

	friend ostream& operator << (ostream& s, const Adresse& a);
};