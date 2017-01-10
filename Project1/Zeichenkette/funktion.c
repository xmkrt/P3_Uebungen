#include "funktion.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

char * berechne(char * string)
{	
	int length = 0;
	char * string2;
	while (string[length])
	{
		length++;
	}
	length++;
	string2 = malloc(length * sizeof(char));
	int i = 0;
	for (i; i < length; i++)
		string2[i] = encode(string[i]);
	return string2;
}

char encode(char c)
{
	int upper = 0;
	char r;
	if (c >= 'A' && c <= 'Z')
		upper = 1;
	c = tolower(c);
	switch (c)
	{
	case 'a': r = 'e'; break;
	case 'e': r = 'i'; break;
	case 'i': r = 'o'; break;
	case 'o': r = 'u'; break;
	case 'u': r = 'a'; break;
	case 'b': r = 'z'; break;
	case 'c': r = 'b'; break;
	case 'd': r = 'c'; break;
	case 'f': r = 'd'; break;
	case 'g': r = 'f'; break;
	case 'h': r = 'g'; break;
	case 'j': r = 'h'; break;
	case 'k': r = 'j'; break;
	case 'l': r = 'k'; break;
	case 'm': r = 'l'; break;
	case 'n': r = 'm'; break;
	case 'p': r = 'n'; break;
	case 'q': r = 'p'; break;
	case 'r': r = 'q'; break;
	case 's': r = 'r'; break;
	case 't': r = 's'; break;
	case 'v': r = 't'; break;
	case 'w': r = 'v'; break;
	case 'x': r = 'w'; break;
	case 'y': r = 'x'; break;
	case 'z': r = 'y'; break;
	
	default: return c;
	}
	if (upper)
		return toupper(r);
	else return r;	
}
