#include <stdio.h>
#include "eratosthenes.h"

#define len 999

int main(int argc, char *argv[]) {
	int a_isprime[999];	
	eratosthenes(a_isprime, len);
	getchar();
}