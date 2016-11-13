#include "eratosthenes.h"
#include <stdio.h>

void eratosthenes(int * a_isprime, int len)
{
	int i = 2;
	for (i-2; i < len; i++)
		a_isprime[i] = 1;
	i = 2;

	for (i-2; i < len; i++) {
		if (a_isprime[i]) {
			for (int j = i*i; j < len; j++) {
				if (!(j % i))
					a_isprime[j] = 0;
			}
		}			
	}

	i = 2;
	for (i-2; i < len; i++) {
		if (a_isprime[i])
			printf(" %3i ", i);
	}
}
