#include "hanoi.h"

void hanoi(int n, char source, char destination, char by)
{

	if (n == 1)
		printf("Verschiebe von %c nach %c\n", source, destination);
	else {
		hanoi(n - 1, source, by, destination);
	    printf("Verschiebe von %c nach %c\n", source, destination);
		hanoi(n - 1, by, destination, source);
	}

}
