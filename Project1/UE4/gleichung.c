#include "gleichung.h"
#include <math.h>

int gleichung(int p, int q, double *x1, double *x2) {

	double d = p*p / 4.0 - q;

	if (d >= 0) {
		*x1 = -p / 2.0 + sqrt(d);
		*x2 = -p / 2.0 - sqrt(d);
		return 1;
	}
	else {
		*x1 = -p / 2.0;
		*x2 = sqrt(-d);
		return 2;
	}
}
