#include "compareFile.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <io.h>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

void compareFiles_C(const char * file1, const char * file2)
{
	FILE * pDatei1 = NULL;
	FILE * pDatei2 = NULL;
	fopen_s(&pDatei1, file1, "rb");
	fopen_s(&pDatei2, file2, "rb");
	if (!pDatei1)
	{
		printf("\nDie Datei %s kann nicht geoeffnet werden.", file1);
	}
	else if (!pDatei2)
	{
		printf("\nDie Datei %s kann nicht geoeffnet werden.", file2);
	}
	else
	{
		char buffer1[1024];
		char buffer2[1024];
		int bytes1 = 0;
		int bytes2 = 0;
		while (1)
		{
			memset(buffer1, 0, 1024);
			memset(buffer2, 0, 1024);
			if (bytes1 = fread(buffer1, 1, 1024, pDatei1))
			{
				if (bytes2 = fread(buffer2, 1, 1024, pDatei2)) {
					if (!(bytes1 == bytes2)) {
						printf("Die Dateien sind unterschiedlich\n");
						break;
					}						
				}
			}
			else {
				printf("Die Dateien sind gleich");
				break;
			}
		}
	}
	fclose(pDatei1);
	fclose(pDatei2);
}

void compareFiles_CPP(const char * file1, const char * file2)
{
	ifstream f1(file1, ios::in);
	ifstream f2(file2, ios::in);
	if (!f1.is_open())
	{
		cerr << "\nDie Datei " << file1 << "kann nicht geoeffnet werden.";
	}
	else if (!f2.is_open())
	{
		cerr << "\nDie Datei " << file2 << "kann nicht geoeffnet werden.";
	}
	else
	{
		int nr = 0;
		{
			// streamsize bytes1 = 0, bytes2 = 0;
			char buffer1[128];
			char buffer2[128];
			while (!f1.eof() || !f2.eof())
			{
				nr += 1;
				f1.getline(buffer1, 128);
				f2.getline(buffer2, 128);
				// Vergleich noch zu erledigen
				if (buffer1 != buffer2) {
					cout << "Die Dateien sind unterschiedlich. Zeile: " << nr;
					break;
				}				
			}
			cout << "Die Dateien sind gleich";
		}
		f1.close();
		f2.close();
	}
	
}
