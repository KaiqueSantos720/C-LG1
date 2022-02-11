#include <stdio.h>
#include <conio.h>
int main()
{
	float sb, h, a, sb1, h1;
	printf("Entre com sb:");
	scanf("%f", &sb);
	printf("Entre com h:");
	scanf("%f", &h);
	if (h>160){
		h1=(h-160);
		a=(sb/160)+(h1*0.5);
		sb1=(a+sb);
		printf("o salario bruto e:%f\n", sb1);}
		else{
			printf("nao ha salario bruto:");}
		float sl;
		if (sb1<800){
			sl=sb1;
			printf("o salario liquido e:%f\n", sl);}
			else{if(sb1<=1600){
				sl=(sb1-(sb1*0.13));
				printf("o salario liquido e:%f\n", sl);}
				else{
					sl=(sb1-(sb1*0.22));
					printf("o salario liquido e:%f\n", sl);}
			}
			return 0;
	}

