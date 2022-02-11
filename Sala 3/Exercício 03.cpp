#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "portuguese");
	float tab;
	printf("Tabuada\n");
	do{
		printf("Informe a tabuada desejada\n");
		scanf("%f", &tab);
		printf("A tabuada do número desejado é:\n");
		cout << tab << "";
		printf(" X 0 = %f\n", tab*0);
		cout << tab << "";
		printf(" X 1 = %f\n", tab*1);
		cout << tab << "";
		printf(" X 2 = %f\n", tab*2);
		cout << tab << "";
		printf(" X 3 = %f\n", tab*3);
		cout << tab << "";
		printf(" X 4 = %f\n", tab*4);
		cout << tab << "";
		printf(" X 5 = %f\n", tab*5);
		cout << tab << "";
		printf(" X 6 = %f\n", tab*6);
		cout << tab << "";
		printf(" X 7 = %f\n", tab*7);
		cout << tab << "";
		printf(" X 8 = %f\n", tab*8);
		cout << tab << "";
		printf(" X 9 = %f\n", tab*9);
		cout << tab << "";
		printf(" X 10 = %f\n", tab*10);}
		while (tab);{}
		getch();
		return 0;
	}
