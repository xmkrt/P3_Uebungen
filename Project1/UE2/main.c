#include <stdio.h>
#include "ascii.h"

int main(int argc, char *argv[]) {
	drawtable();
	

	int k = 14567;
	int f = 11;

	char *arr[11];

	while (k / 10 != 0) {
		arr[f] = k % 10;
		k++;
		f--;
	}
	printf("\n\n");
	printf(arr);
	return 0;
}

