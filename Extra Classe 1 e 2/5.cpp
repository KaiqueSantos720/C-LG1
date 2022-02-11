#include <stdio.h>
#include <conio.h>
int main ()
{
	int a, b;
	printf("Entre com ano:");
	scanf("%i", &a);
	if (a % 4==0 && a % 100!=0){
		b=(a/4);
		printf("o ano e bissexto", a);
		printf(" o resultado e:%i\n", b);}
		if (a % 4!=0 && a % 400!=0){
			printf("o ano nao e bissexto");}
			if (a % 400==0 && a % 100==0){
				b=(a/400);
				printf("o ano e bissexto", a);
				printf(" o resultado e:%i\n", b);}
				if (a % 100==0 && a % 400!=0){
					printf("o ano nao e bissexto");}
				return 0;
}
