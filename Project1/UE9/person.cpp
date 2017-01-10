#include "kontakt.h"


Figur::Figur(Punkt p, Size s) : Punkt(p), Size(s)
{
}

Figur::Figur(const Figur& f) : Punkt(f), Size(f)
{
}

Figur::~Figur() {}

ostream & operator << (ostream & s, const Figur& p)
{
	ostream& cs = cout;
	//if (typeid(s) == typeid(cs))
	//	s << p.type() << "  " << p.area() << "  " << p.perimeter();
	s << (Punkt)p << (Size)p;
	return s;
}

istream & operator >> (istream & s, Figur& f)
{
	//s >> (Punkt&)f ;
	//s >> (Size&)f;
	Punkt p;
	Size sz;
	s >> p >> sz;
	f.setX(p.x); 	f.setY(p.y);
	f.setW(sz.x);	f.setH(sz.y);
	return s;
}

