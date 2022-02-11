#include <stdio.h>
#include <conio.h>
int main()
{
	float h, b, c;
	printf("Entre com a hipotenusa:");
	scanf("%f", &h);
	printf("Entre com o cateto:");
	scanf("%f", &b);
	printf("Entre com o cateto:");
	scanf("%f", &c);
	if ((h*h)==(b*b)+(c*c)){
		printf("e retangulo");}
		else {
			printf("nao e retangulo");}
			return 0;
}
