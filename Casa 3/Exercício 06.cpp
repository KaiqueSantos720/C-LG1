#include <stdio.h>
#include <conio.h>
int main()
{
	char p;
	printf("Numeros de 20 a 1\n");
	printf("Deseja ver os numeros pares ou os impares\n");
	printf("p:pares\ni:impares\n");
	scanf("%c", &p);
	switch (p){
		case 'i':
			int cont;
			printf("Os numeros impares sao:\n");
			for(cont=19; cont>=1; cont-=2){
				printf("%i\n", cont);} break;
				case 'p':
					int contd;
					printf("Os numeros pares sao:\n");
					for(contd=20; contd>=1; contd-=2){
						printf("%i\n", contd);} break;
						default:
							printf("Opcao Invalida");}
	return 0;
}
