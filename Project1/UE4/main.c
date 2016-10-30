#include <stdio.h>
#include "gleichung.h"

int main(int argc, char *argv[]) {
	double x1;
	double x2;

	gleichung(-1, 0, 1, &x1, &x2);

	printf("Lösungen der Gleichung bei: %.2f und %.2f.", x1, x2);
	
	getchar();
}


