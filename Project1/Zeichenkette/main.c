/*
 * Marcel Kroth
 *
 *
 */

#include <stdio.h>
#include "funktion.h"

long int main(int argc, char *argv[]) {
	char* kette = "Alle meine Entchen schwimmen auf dem See, Koepfchen in das Wasser, Schwaenzchen in die Hoeh.";
	
	printf("String 1:\n%s", kette);
	char * new = berechne(kette);
	printf("String 2:\n%s", new);
	getchar();
}
