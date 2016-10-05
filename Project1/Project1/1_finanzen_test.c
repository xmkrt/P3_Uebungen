#include <stdio.h>
#include "1_finanzen.h"

int main(int argc, char* argv[]) {
	double guthaben = 100000.;
	int jahre = 8;	
	double zinssatz = 0.008;
	printf("Startguthaben: %.2f\nZinssatz: %.3f\nEndguthaben: %.2f", guthaben, zinssatz, zinsberechnung(jahre, zinssatz, guthaben));
	getchar();
	return 0;
}