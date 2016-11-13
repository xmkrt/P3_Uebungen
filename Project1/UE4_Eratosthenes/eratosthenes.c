#include "eratosthenes.h"
#include <stdio.h>

void eratosthenes(int * a_isprime, int len)
{
	int i = 0;
	for (i; i < len; i++)
		a_isprime[i] = 1;
	int c;

	i = 0;
	int j = 0;
	for (i; i < len; i++) {
		if (a_isprime[i]) {
			c = i + 2;
			for (j; j < len; j++) {
				if ((i + 3) % c)
					a_isprime[i] = 0;v
			}

	}
	i = 0;
	for (i; i < len; i++) {
		if (a_isprime[i])
			printf(" %3i ", i);
	}
}
