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
	printf("Informe a operação desejada\n");
	printf("1-Soma\n2-Subtração\n3-Multiplicação\n4-Divisão\n5-Sair\n");
	scanf("%i", &ope);
	switch (ope){
		    float a, b, c;
		    case 1:
			printf("Qual é o valor de a");
			scanf("%f", &a);
			printf("Qual é o valor de b");
			scanf("%f", &b);
			c=(a+b);
			printf("O valor da soma é:%f\n", c); break;
			case 2:
		    printf("Qual é o valor de a");
			scanf("%f", &a);
			printf("Qual é o valor de b");
			scanf("%f", &b);
			c=(a-b);
			printf("O valor da subtração é:%f\n", c); break;
			case 3:
			printf("Qual é o valor de a");
			scanf("%f", &a);
			printf("Qual é o valor de b");
			scanf("%f", &b);
			c=(a*b);
			printf("O valor da multiplicação é:%f\n", c); break;
			case 4:
			printf("Qual é o valor de a");
			scanf("%f", &a);
			printf("Qual é o valor de b");
			scanf("%f", &b);
			c=(a/b);
			printf("O valor da divisão é:%f\n", c); break;
			case 5:
			printf("Programa Encerrado"); break;
			default:
			printf("Operação Inválida");	
			}	
			}
			while(ope>0 && ope<5);{}
			getch();
			return 0;
}
