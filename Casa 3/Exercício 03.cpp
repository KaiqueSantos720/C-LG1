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
		case 'p':
		int cont;
		cont=2;
		printf("Os numeros pares sao:\n");
		while(cont<=20){
			printf("%i\n", cont);
			cont+=2;} break;
			case 'i':
				int contd;
				contd=1;
				printf("Os numeros impares sao:\n");
				while(contd<=20){
					printf("%i\n", contd);
					contd+=2;} break;
					default:
						printf("Opcao Invalida");}
return 0;
}
