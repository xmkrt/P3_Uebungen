/*
Übung 1: Zins und Kreditberechnung
*/
/*
Autor: Marcel Kroth
*/

#include "1_finanzen.h"

double zinsberechnung(int jahre, double zinssatz, double guthaben)
{
	int i = 0;
	for (; i <= jahre; i++)
	{
		guthaben = ((int)(guthaben * (1. + zinssatz)))/100;
	}
	return guthaben;
}
