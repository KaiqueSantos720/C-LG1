#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "portuguese");
	float p;
	int p1;
	printf("Caldeira\n");
	printf("Qual � o n�vel da press�o da caldeira?\n");
	printf("1-Press�o Baixa(0.00-3.33)\n2-Press�o M�dia(3.34-6.66)\n3-Press�o Alta(6.67-9.99)\n");
	scanf("%i", &p1);
	printf("Informe o valor da press�o da caldeira, de acordo com o n�vel de press�o que voc� escolheu\n");
	scanf("%f", &p);
	switch(p1){
		case 1:
			if(p<0.00 || p>3.33){
				printf("Valor Inv�lido");}
				else{
					printf("Press�o Baixa\n");
					printf("A press�o �: %.2f\n", p);}
					break;
		case 2:
			if(p<3.33 || p>6.66){
				printf("Valor Inv�lido");}
				else{
					printf("Press�o M�dia\n");
					printf("A press�o �: %.2f\n", p);}
					break;
		case 3:
			if(p<6.67 || p>9.99){
				printf("Valor Inv�lido");}
				else{
					printf("Perigo: Press�o Alta\n");
					printf("A Press�o �: %.2f\n", p);}
					break;
					default:
						printf("Op��o Inv�lida");
	}
	getch();
	return 0;
}
