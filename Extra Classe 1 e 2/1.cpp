#include <stdio.h>
#include <conio.h>
int main()
{
	int a, b;
	printf("Entre com um numero positivo a:");
	scanf("%i", &a);
	printf("Entre com um numero positivo b:");
	scanf("%i", &b);
	if (a<0 || b<0){
		printf("ha valores negativos");}
		else {
	if (a>b){
		printf("a:%i\n", a);}
    if (a<b){
    	printf("b:%i\n", b);}
    	if (a==b){
    		printf("os valores sao iguais");
			printf(" a e b sao:%i\n", a);}}
    		return 0;
}
