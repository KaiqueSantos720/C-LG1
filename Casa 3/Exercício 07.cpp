#include <stdio.h>
#include <conio.h>
int main()
{
	int cont;
	printf("Numeros de 1 a 20:\n");
	cont=0;
	do{
		cont+=1;
		printf("%i\n", cont);
	}
	while(cont<20);{}
	getch();
	return 0;
 } 
