#include <stdio.h>
#include <conio.h>
int main()
{
	int z, p;
	printf("Entre com um numero inteiro:");
	scanf("%i", &z);
	if (z<0){
		p=z*-1;
		printf("o numero positivo e:%i\n", p);}
		else{
			p=z;
			printf("o numero positivo e:%i\n", p);}
			return 0;
}
