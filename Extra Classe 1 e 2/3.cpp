#include <stdio.h>
#include <conio.h>
int main()
{
	float a, b, c, aq, bq, cq;
	printf("Entre com a:");
	scanf("%f", &a);
	printf("Entre com b:");
	scanf("%f", &b);
	printf("Entre com c:");
	scanf("%f", &c);
	aq=a*a;
	bq=b*b;
	cq=c*c;
	if (cq<1000){
		printf("o quadrado de a e:%f\n", aq);
		printf("o quadrado de b e:%f\n", bq);
		printf("o quadrado de c e:%f\n", cq);}
		else{
			printf("programa finalizado");}
			return 0;
}
