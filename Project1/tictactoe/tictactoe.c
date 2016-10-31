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
#define voll 0b111111111

//Belegeung des Spielfeldes
int belegt = 0;
int spieler = 0;
int computer = 0;

void tictactoe()
{
	//Zufallsgenerator
	srand(time(NULL));
	printf("#### TicTacToe ####\n\n");
	draw();
	play();	
	
}

int feld(int f) {
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
	int spielzug = 0;
	int eingabe;
	while (!win()) {
		//Spieler
		if (spielzug == 0) {
			printf("Zug: ");
				eingabe = getchar() - 48;
				getchar(); //Puffer leeren
				if (eingabe <= 8 && eingabe >= 0 && (!((1<<eingabe) & belegt))) {
					spieler = spieler | (1 << eingabe);
					belegt = belegt | (1 << eingabe);
					spielzug = 1;
				}
		}
		//Computer
		else {
			printf("Computer ist am Zug\n");
			do {
				eingabe = rand() % 9;
			} while (((1 << eingabe) & belegt));
			computer = computer | (1 << eingabe);
			belegt = belegt | (1 << eingabe);
			spielzug = 0;
		} 
		draw();		
	}
	int gewinner = win();
	if (gewinner == 1)
		printf("Spieler hat gewonnen!");
	else if (gewinner == 2)
		printf("Computer hat gewonnen!");
	else if (gewinner == 3)
		printf("Unentschieden.");
}

//return 0 bei keinem Gewinn, 1 bei Spieler, 2 bei Computer, 3 bei unentschieden
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

	if ((voll & belegt) == voll)
		return 3;
	return 0;
}

