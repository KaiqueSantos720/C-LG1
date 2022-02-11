#include <stdio.h>
#include <conio.h>
int main()
{
	int cont;
	printf("Numeros de 1 a 20:\n");
	cont=0;
	while(cont<20){
		cont+=1;
		printf("%i\n", cont);
	}
	getch();
	return 0;
}
