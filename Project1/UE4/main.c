#include <stdio.h>
#include "gleichung.h"

int main(int argc, char *argv[]) {
	double x1;
	double x2;

	double p = 4;
	double q = 1;

	int status = 0;

	status = gleichung(p, q, &x1, &x2);

	if (status == 1)
		printf("Loesungen der Gleichung: %.2f und %.2f.", x1, x2);
	if (status == 2)
		printf("Loesungen der Gleichung: %.2f %c i*%.2f", x1, 241, x2);
	getchar();
}


