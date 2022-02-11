#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	float n1, n2, m;
	printf("Entre com n1:");
	scanf("%f", &n1);
	printf("Entre com n2:");
	scanf("%f", &n2);
	m=(n1+n2)/2;
	if (m>=7){
		printf("Aprovado com a media:%f\n", m);}
		if (m<3){
			printf("Reprovado com a media:%f\n", m);}
			else {
				if (m>=3 && m<7){
				printf("Recuperacao com a media:%f\n", m);}}
				return 0;
}
