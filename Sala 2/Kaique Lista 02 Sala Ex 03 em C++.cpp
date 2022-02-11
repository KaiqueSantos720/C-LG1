#include <stdio.h>
#include <conio.h>
int main()
{
	float v1, v2, d;
	printf("Entre com v1:");
	scanf("%f", &v1);
	printf("Entre com v2:");
	scanf("%f", &v2);
	if (v1==v2){
		d=0;
		printf("a diferenca e:%f\n", d);}
		else{if (v1<v2){
			d=(v2-v1);
			printf("a diferenca e:%f\n", d);}
			else{
				d=(v1-v2);
				printf("a diferenca e:%f\n", d);}
		}
		return 0;
}
