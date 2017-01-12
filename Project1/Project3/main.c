#include "ausgabe.h"
#include "struktur.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[])
{
	struct computer c;
	struct gps g;
	struct pda p;

	c.baujahr = 20;
	c.taktrate = 3333.33;
	g.preis = 200.21;
	p.c = c;
	p.g = g;
	p.navigation = 1;
	ausgabe_p(p);
	getchar();
}
