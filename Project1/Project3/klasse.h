#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <typeinfo>

using namespace std;

class Computer
{
private:
	int Baujahr;
	float Taktrate;
public:
	// Methoden
	Computer(int Baujahr = 1900, float Taktrate = 2000.0);
	Computer(const Computer& p);

	void setBaujahr(int Baujahr)
	{
		if (Baujahr > 1900 && Baujahr < 2017)
			this->Baujahr = Baujahr;
	}
	int getBaujahr() const { return Baujahr; }

	void setTaktrate(float Taktrate)
	{
		if (Taktrate > 0.0)
			this->Taktrate = Taktrate;

	}
	float getTaktrate() const { return  Taktrate; }


	const Computer& operator = (const Computer& p);
	friend ostream & operator << (ostream & s, const Computer& p);
	friend istream & operator >> (istream & s, Computer& p);
};

class GPS
{
private:
	float Preis;
public:
	// Methoden
	GPS(float Preis = 200.0);
	GPS(const GPS& p);

	void setPreis(float Preis)
	{
		if (Preis > 0)
			this->Preis = Preis;
	}
	float getPreis() const { return Preis; }

	const GPS& operator = (const GPS& p);
	friend ostream & operator << (ostream & s, const GPS& p);
	friend istream & operator >> (istream & s, GPS& p);
};

class PDA
{
private:
	Computer computer;
	GPS gps;
	bool navigation;
public:
	// Methoden
	PDA(Computer computer, GPS gps, bool navigation = false);
	PDA(const PDA& p);

	void setComputer(int Baujahr)
	{
			this->computer = computer;
	}
	Computer getComputer() const { return computer; }

	void setGps(GPS gps)
	{
			this->gps = gps;
	}
	GPS getGps() const { return gps; }

	void setGps(bool navigation = 0)
	{
		this->navigation = navigation;
	}
	bool getNavigation() const { return navigation; }


	const PDA& operator = (const PDA& p);
	friend ostream & operator << (ostream & s, const PDA& p);
	friend istream & operator >> (istream & s, PDA& p);
};