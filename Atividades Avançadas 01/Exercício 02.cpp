#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "portuguese");
	float p;
	int p1;
	printf("Caldeira\n");
	printf("Qual é o nível da pressão da caldeira?\n");
	printf("1-Pressão Baixa(0.00-3.33)\n2-Pressão Média(3.34-6.66)\n3-Pressão Alta(6.67-9.99)\n");
	scanf("%i", &p1);
	printf("Informe o valor da pressão da caldeira, de acordo com o nível de pressão que você escolheu\n");
	scanf("%f", &p);
	switch(p1){
		case 1:
			if(p<0.00 || p>3.33){
				printf("Valor Inválido");}
				else{
					printf("Pressão Baixa\n");
					printf("A pressão é: %.2f\n", p);}
					break;
		case 2:
			if(p<3.33 || p>6.66){
				printf("Valor Inválido");}
				else{
					printf("Pressão Média\n");
					printf("A pressão é: %.2f\n", p);}
					break;
		case 3:
			if(p<6.67 || p>9.99){
				printf("Valor Inválido");}
				else{
					printf("Perigo: Pressão Alta\n");
					printf("A Pressão é: %.2f\n", p);}
					break;
					default:
						printf("Opção Inválida");
	}
	getch();
	return 0;
}
