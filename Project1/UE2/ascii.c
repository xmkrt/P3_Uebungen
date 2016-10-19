#include <stdio.h>
#include "ascii.h"

void drawtable() {
	int i = 32;
	// printf("%2c\n", 179);
	drawline(0xda, 0xc2, 0xbf);

	for (int j = 0; j < 4; j++) {
		printf("%2c %3s %3s %3s ", 179, "Dez", "Hex", "Z");
	}
	printf("%2c \n", 179);

	drawline(0xc3, 0xc5, 0xb4);

	while (i < 256) {
		printf("%2c %3i %3x %3c %2c", 179, i, i, i, 179);
		printf(" %3i %3x %3c %2c", i + 1, i + 1, i + 1, 179);
		printf(" %3i %3x %3c %2c", i + 2, i + 2, i + 2, 179);
		printf(" %3i %3x %3c %2c\n", i + 3, i + 3, i + 3, 179);
		i = i + 4;
	}
	drawline(0xc0, 0xc1, 0xd9);
	getchar();
}

void drawline(int links, int mitte, int rechts) {
	printf("%2c", links);
	for (int j = 1; j < 60; j++) {
		if (j % 15 == 0)
			printf("%c", mitte);
		else
			printf("%c", 0xc4);
	}
	printf("%c\n", rechts);
}