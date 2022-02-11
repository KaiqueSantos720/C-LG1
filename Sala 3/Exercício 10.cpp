#include <stdio.h>
#include <conio.h>
int main ()
{
	int i, soma;
	soma=0;
	for(i=0; i<=500; i+=2){
	if (i % 2==0){
		soma=soma+i;
		printf("A soma e: %i\n", soma);}
	}
	getch();
	return 0;
}
