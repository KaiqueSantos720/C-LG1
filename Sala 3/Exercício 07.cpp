#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "portuguese");
	int b, e, cont, p;
	printf("Potenciação de base 3\n");
	b=3;
	e=15;
	cont=1;
	p=b;
	printf("3 elevado a 0=1\n");
	printf("3 elevado a 1=3\n");
	do{
		p=p*b;
		cont+=1;
		printf("3 elevado a ");
		cout << cont << "";
		printf("=%i\n", p);}
		while(cont<e);{}
		getch();
		return 0;
	}
	
