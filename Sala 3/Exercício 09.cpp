#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "portuguese");
	int b, e, p, cont;
	printf("Potencia��o\n");
	printf("Informe a base da pot�ncia:\n");
	scanf("%i", &b);
	printf("Informe o expoente da pot�ncia:\n");
	scanf("%i", &e);
	if (e==0){
		p=1;
		printf("A pot�ncia �:%i\n", p);}
		else{
		cont=1;
		p=b;
		while (cont<e){
			p=p*b;
			cont+=1;}
			printf("O valor da pot�ncia �:%i\n", p);}
	getch();
	return 0;
}
