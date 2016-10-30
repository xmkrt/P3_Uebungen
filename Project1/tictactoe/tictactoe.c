#include <stdio.h>
#include "tictactoe.h"
#include <stdlib.h>
#include <time.h>

//Gewinnzustände 
//horizontal
#define w1 0b111
#define w2 0b111000
#define w3 0b111000000
//diagonal
#define w4 0b1010100
#define w5 0b100010001
//vertikal
#define w6 0b1001001
#define w7 0b10010010
#define w8 0b100100100

//Belegeung des Spielfeldes
belegt = 0;
spieler = 0;
computer = 0;


/*//Gewinnzustände 
//horizontal
 w1 = 0b111;
w2 = 0b111000;
w3 = 0b111000000;
//diagonal
w4 = 0b1010100;
w5 = 0b100010001;
//vertikal
w6 = 0b1001001;
w7 = 0b10010010;
w8 = 0b100100100;
*/


void tictactoe()
{
	//Zufallsgenerator
	srand(time(NULL));
	printf("#### TicTacToe ####\n\n");
	draw();
	play();	
	
}

int feld(int f) {
	// int feld_belegt = (belegt & (1 << f));
	// int feld_s = (spieler & (1 << f));
	// int feld_c = (computer & (1 << f));

	// Wenn Feld belegt, etnsprechendes Zeichen zurückgeben
	if (spieler & (1 << f))
		return 'X';
	if (computer & (1 << f))
		return 'O';
	return ' ';
}

void draw()
{
	int i;
	printf("-------------------\n");
	for (i = 0; i <= 6; i = i + 3) {
		printf("|  %c  |  %c  |  %c  |", feld(i), feld(i+1), feld(i+2));
		printf("\n-------------------\n");
	}
}

void play() {
	int p = 0;
	int eingabe;
	while (!win()) {
		//Spieler
		if (p == 0) {
			printf("Zug: ");
				eingabe = getchar() - 48;
				getchar(); //Puffer leeren
				if (eingabe <= 8 && eingabe >= 0 && (((1<<eingabe) & belegt) == 0)) {
					spieler = spieler | (1 << eingabe);
					belegt = belegt | (1 << eingabe);
					p = 1;
				}
		}
		//Computer
		else {
			printf("Computer ist am Zug\n");
			do {
				eingabe = rand() % 9;
			} while (((1 << eingabe) & belegt) != 0);
			computer = computer | (1 << eingabe);
			belegt = belegt | (1 << eingabe);
			p = 0;
		} 
		draw();		
	}
	if (win() == 1)
		printf("Spieler ha gewonnen!");
	else printf("Computer hat gewonnen!");
}

//return 0 bei keinem Gewinn, 1 bei Spieler, 2 bei Computer
int win()
{
	if ((w1 & spieler) == w1)
		return 1;
	if ((w2 & spieler) == w2)
		return 1;
	if ((w3 & spieler) == w3)
		return 1;
	if ((w4 & spieler) == w4)
		return 1;
	if ((w5 & spieler) == w5)
		return 1;
	if ((w6 & spieler) == w6)
		return 1;
	if ((w7 & spieler) == w7)
		return 1;
	if ((w8 & spieler) == w8)
		return 1;

	if ((w1 & computer) == w1)
		return 2;
	if ((w2 & computer) == w2)
		return 2;
	if ((w3 & computer) == w3)
		return 2;
	if ((w4 & computer) == w4)
		return 2;
	if ((w5 & computer) == w5)
		return 2;
	if ((w6 & computer) == w6)
		return 2;
	if ((w7 & computer) == w7)
		return 2;
	if ((w8 & computer) == w8)
		return 2;
	return 0;
}

