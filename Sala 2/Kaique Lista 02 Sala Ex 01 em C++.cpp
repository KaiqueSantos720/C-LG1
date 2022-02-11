#include <stdio.h>
#include <conio.h>
int main()
{
	float n1, n2, n3, m;
	printf("Entre com n1:");
	scanf("%f", &n1);
	printf("Entre com n2:");
	scanf("%f", &n2);
	printf("Entre com n3:");
	scanf("%f", &n3);
	m=(n1+n2+n3)/3;
	if (m>=6){
		printf("aprovado com a media:%f\n", m);}
		else{
			printf("reprovado com a media:%f\n", m);}
			return 0;
}
