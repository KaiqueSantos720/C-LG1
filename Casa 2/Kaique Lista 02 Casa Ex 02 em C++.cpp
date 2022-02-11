#include <stdio.h>
#include <conio.h>
int main()
{
	int n, nc, d;
	printf("insira um numero inteiro:");
	scanf("%i", &n);
	nc=20;
	if (n>nc){
		d=(n-nc);
		printf("a distancia e:%i\n", d);}
		else{
			d=(nc-n);
			printf("a distancia e:%i\n", d);}
			return 0;
}
