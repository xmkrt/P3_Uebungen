#include <stdio.h>
#include "compare.h"
#include <string.h>

int main(int argc, char *argv[]) {
	
	char * string1 =  "Hallo";
	char * string2 = "Ballo";

	printf("Vergleiche \"%s\" mit \"%s\".......Ergebnis:\n", string1, string2);
	printf("%i\n",strcomp(string1, string2));
	printf("%i\n", strcmp(string1, string2));

	getchar();
}
