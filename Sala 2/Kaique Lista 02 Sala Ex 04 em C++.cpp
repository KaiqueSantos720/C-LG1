#include <stdio.h>
#include <conio.h>
int main()
{
	float a, b, c;
	printf("Entre com um numero positivo a:");
	scanf("%f", &a);
	printf("Entre com um numero positivo b:");
	scanf("%f", &b);
	printf("Entre com um numero positivo c:");
	scanf("%f", &c);
	if (a<b+c && b<a+c && c<a+b){
		printf("e um triangulo:");
			if (a==b && b==c && a==c){
				printf("equilatero e ");}
				if (a==b || a==c || b==c){
					printf("isosceles");}
					if (a!=b && b!=c && a!=c){
						printf("escaleno");}}
						else {
							printf("nao e triangulo");}
				return 0;
}
