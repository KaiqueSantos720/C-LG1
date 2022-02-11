#include <stdio.h>
#include <conio.h>
int main()
{
	int n;
	printf("Digite um numero menor ou igual a 50\n");
	scanf("%i", &n);
	if (n>50 || n==0 || n<0){
		printf("Numero Invalido");}
		else{
			while (n<250){
			n=n*3;
			printf("O valor da multiplicacao por 3 e:%i\n", n);}}
			return 0;
}
