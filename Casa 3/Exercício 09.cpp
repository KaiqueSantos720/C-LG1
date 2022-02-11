#include <stdio.h>
#include <conio.h>
int main()
{
	char p;
	printf("Numeros de 1 a 20\n");
	printf("Deseja ver os pares ou os impares\n");
	printf("p:pares\ni:impares\n");
	scanf("%c", &p);
	switch (p){
		case 'i':
			int cont;
			cont=1;
			printf("Os numeros impares sao:\n");
	do{
		printf("%i\n", cont);
		cont+=2;}
	while(cont<=20);{} break;
	case 'p':
		int contd;
		contd=2;
		printf("Os numeros pares sao:\n");
	do{
		printf("%i\n", contd);
		contd+=2;}
		while (contd<=20);{} break;
		default:
			printf("Opcao Invalida");
		}
	return 0;
}
