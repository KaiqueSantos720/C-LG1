#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "portuguese");
	int b, e, p, cont;
	printf("Potenciação\n");
	printf("Informe a base da potência:\n");
	scanf("%i", &b);
	printf("Informe o expoente da potência:\n");
	scanf("%i", &e);
	if (e==0){
		p=1;
		printf("A potência é:%i\n", p);}
		else{
		cont=1;
		p=b;
		while (cont<e){
			p=p*b;
			cont+=1;}
			printf("O valor da potência é:%i\n", p);}
	getch();
	return 0;
}
