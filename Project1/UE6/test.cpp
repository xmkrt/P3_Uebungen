#include "compareFile.h"
#include <cstdio>


int main(int argc, char *argv[]) {
	if (argc == 3)
	{
		printf("Vergleiche %s mit %s\n", argv[1], argv[2]);
		compareFiles_C(argv[1], argv[2]);
		compareFiles_CPP(argv[1], argv[2]);
	}
	else printf("Fehler");	
}

