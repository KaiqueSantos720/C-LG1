#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "portuguese");
	int ope;
	printf("Calculadora\n");
	do{
	printf("Informe a opera��o desejada\n");
	printf("1-Soma\n2-Subtra��o\n3-Multiplica��o\n4-Divis�o\n5-Sair\n");
	scanf("%i", &ope);
	switch (ope){
		    float a, b, c;
		    case 1:
			printf("Qual � o valor de a");
			scanf("%f", &a);
			printf("Qual � o valor de b");
			scanf("%f", &b);
			c=(a+b);
			printf("O valor da soma �:%f\n", c); break;
			case 2:
		    printf("Qual � o valor de a");
			scanf("%f", &a);
			printf("Qual � o valor de b");
			scanf("%f", &b);
			c=(a-b);
			printf("O valor da subtra��o �:%f\n", c); break;
			case 3:
			printf("Qual � o valor de a");
			scanf("%f", &a);
			printf("Qual � o valor de b");
			scanf("%f", &b);
			c=(a*b);
			printf("O valor da multiplica��o �:%f\n", c); break;
			case 4:
			printf("Qual � o valor de a");
			scanf("%f", &a);
			printf("Qual � o valor de b");
			scanf("%f", &b);
			c=(a/b);
			printf("O valor da divis�o �:%f\n", c); break;
			case 5:
			printf("Programa Encerrado"); break;
			default:
			printf("Opera��o Inv�lida");	
			}	
			}
			while(ope>0 && ope<5);{}
			getch();
			return 0;
}
