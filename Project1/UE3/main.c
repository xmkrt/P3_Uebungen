#include <stdio.h>
#include "potenzfunktion.h"
#include "hanoi.h"

int counter = 0;

long int main(int argc, char *argv[]) {
	printf("%i\n", potenzfunktion_iterativ(10, 12));
	printf("%i\n", potenzfunktion_rekursiv(10, 5));
	
	
	hanoi(16, 'A', 'B', 'C');
	printf("Die Funktion wurde %i mal aufgerufen.", counter);

	getchar();
}