#include <stdio.h>
#include "potenzfunktion.h"
#include "hanoi.h"

long int main(int argc, char *argv[]) {
	printf("%i\n", potenzfunktion_iterativ(10, 12));
	printf("%i\n", potenzfunktion_rekursiv(10, 5));

	hanoi(20, 'A', 'B', 'C');

	getchar();
}