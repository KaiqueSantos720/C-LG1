#include <stdio.h>
#include <conio.h>
#include <math.h>
int main ()
{
float a, b, c, d, x1, x2;
printf("Entre com a:");
scanf("%f", &a);
printf("Entre com b:");
scanf("%f", &b);
printf("Entre com c:");
scanf("%f", &c);
d=((b*b)-4*a*c);
printf("d e:%f\n", d);
if (d==0){
	x1=(-b)/(2*a);
	x2=x1;
	printf("x1 e:%f\n", x1);
	printf("x2 e:%f\n", x2);
	printf("A equacao possui duas raizes reais e iguais");}
	else {
		if (d>0){
			x1=((-b)+(pow(d,0.5)))/(2*a);
			x2=((-b)-(pow(d,0.5)))/(2*a);
			printf("x1 e:%f\n", x1);
			printf("x2 e:%f\n", x2);
			printf("A equacao possui duas raizes reais e distintas");}
			else {
				printf("A equacao nao possui raizes reais");}
			}
    return 0;
}
