#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "portuguese");
	int tab, i, r;
	printf("Tabuada\n");
		printf("Informe a tabuada desejada\n");
		scanf("%i", &tab);
		printf("A tabuada do %i é:\n", tab);
for(i=0; i<=10; i++){
	r=i*tab;
	printf("%i X %i = %i\n", tab, i, r);}
		getch();
		return 0;
	}
