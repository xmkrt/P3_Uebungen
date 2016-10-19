#include <limits.h>

int potenzfunktion_iterativ(int x, int p) {
	if (p == 0)
		return 1;
	if (x == 0)
		return 0;

	int out = x;
	for (int i = 1; i < p; i++) {
		if (out > INT_MAX / x)
			return -1;
		out *= x;
	}
	return out;
}

int potenzfunktion_rekursiv(int x, int p) {
	if (p == 0) 
		return 1;
	return x * potenzfunktion_rekursiv(x, p - 1);
}