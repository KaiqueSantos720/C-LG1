#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "portuguese");
	int cont, a, b, aux, i;
	a=0;
	b=1;
		for(i=0; i<15; i++){
		aux=a+b;
		a=b;
		b=aux;
		printf("A sequência é:%i\n", aux);}
		getch();
		return 0;
}
