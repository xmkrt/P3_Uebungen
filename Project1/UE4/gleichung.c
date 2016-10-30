#include "gleichung.h"
#include <math.h>

void gleichung(int a, int b, int c, double *x1, double *x2) {
	double p = b / a;
	double q = c / a;

	double d = p*p / 4 - q;

	if (d >= 0) {
		*x1 = -p / 2 + sqrt(d);
		*x2 = -p / 2 - sqrt(d);
	}
}
