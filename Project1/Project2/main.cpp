#include "adresse.h"

int main(int argc, char* argv[]){
	Adresse ma = Adresse("Zanderstrasse 10", "14770 Brandenburg");
	cout << ma;
	ma.setPLZStadt("123456 Berlin");
	cout << ma;
	system("pause");
	return 1;
}