#include "ausgabe.h"
#include <stdio.h>

void ausgabe_c(struct computer c)
{
	printf("--Computer--\nBaujahr: %i\nTaktrate: %.2f\n", c.baujahr, c.taktrate);
}

void ausgabe_g(struct gps g)
{
	printf("--GPS--\nPreis: %.2f\n", g.preis);
}

void ausgabe_p(struct pda p)
{
	printf("--PDA--\n");
	ausgabe_c(p.c);
	ausgabe_g(p.g);
	printf("Navigation: ");
	p.navigation ? printf("Ja") : printf("Nein");
}
