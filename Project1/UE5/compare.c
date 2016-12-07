#include "compare.h"
#include <ctype.h>

int strcomp(const char * string1, const char * string2)
{
	int i;
	int j;
	for (i = 0;; i++) {
		if ((string1[i] && !string2[i]) || (!string1[i] && string2[i])) {
			j = i;
			i = 0;
			for (i; i <= j; i++) {
				if (toupper(string1[i]) != toupper(string2[i]))
					return (toupper(string1[i]) - toupper(string2[i]));
			}
		}
		if (string1[i] == 0 && string2[i] == 0) {
			printf("%c", toupper(string1[i]));
			return (toupper(string1[i]) - toupper(string2[i]));
		
		}
	}
}

/*
j = i;
i = 0;
for (i; i <= j; i++) {
if (toupper(string1[i]) != toupper(string2[i]))*/
