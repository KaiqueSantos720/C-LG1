#include <stdio.h>
#include <conio.h>
int main()
{
	int cont, q;
	printf("Quadrado dos numeros de 15 a 200\n");
	cont=14;
	while (cont<200){
		cont+=1;
		q=cont*cont;
		printf("O quadrado de ");
		printf("%i", cont);
		printf(" e:");
		printf("%i\n", q);}
		getch();
		return 0;
}
