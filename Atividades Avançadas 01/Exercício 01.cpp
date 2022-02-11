#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "portuguese");
	int d, m, a;
	printf("Digite um ano de 1900 a 2100\n");
	scanf("%i", &a);
	if(a<1900 || a>2100){
		printf("Ano Inválido");}
		else{
			printf("Informe o mês\n");
			printf("1-Janeiro\n2-Fevereiro\n3-Março\n4-Abril\n5-Maio\n6-Junho\n7-Julho\n8-Agosto\n9-Setembro\n10-Outubro\n11-Novembro\n12-Dezembro\n");
			scanf("%i", &m);
			printf("Informe o dia\n");
			scanf("%i", &d);
			switch(m){
				case 1:
					if(d<1 || d>31){
						printf("Dia Inválido\n");}
						else{
						printf("%i de Janeiro de %i\n", d, a);}
						break;
				case 2:
					    if(d<1 || d>29){
						printf("Dia Inválido");}
						else{
							if (d>1 && d<29){
							printf("%i de Fevereiro de %i", d, a);}
						    if(d==29 && a%4==0 && a%100!=0){
							printf("%i de Fevereiro de %i", d, a);}
							if(d==29 && a%4!=0){
						    printf("Dia Inválido");}
							if(d==29 && a%4==0 && a%100==0 && a%400==0){
							printf("%i de Fevereiro de %i", d, a);}
							if(d==29 && a%4==0 && a%100==0 && a%400!=0){
							printf("Dia Inválido");}}
							break;
				case 3:
						if(d<1 || d>31){
						printf("Dia Inválido\n");}
						else{
						printf("%i de Março de %i\n", d, a);}
						break;
				case 4:
					if(d<1 || d>30){
						printf("Dia Inválido\n");}
						else{
						printf("%i de Abril de %i\n", d, a);}
						break;
				case 5:
					if(d<1 || d>31){
						printf("Dia Inválido\n");}
						else{
						printf("%i de Maio de %i\n", d, a);}
						break;
				case 6:
					if(d<1 || d>30){
						printf("Dia Inválido\n");}
						else{
						printf("%i de Junho de %i\n", d, a);}
						break;
				case 7:
					if(d<1 || d>31){
						printf("Dia Inválido\n");}
						else{
						printf("%i de Julho de %i\n", d, a);}
						break;
				case 8:
					if(d<1 || d>31){
						printf("Dia Inválido\n");}
						else{
						printf("%i de Agosto de %i\n", d, a);}
						break;
				case 9:
					if(d<1 || d>30){
						printf("Dia Inválido\n");}
						else{
						printf("%i de Setembro de %i\n", d, a);}
						break;
				case 10:
					if(d<1 || d>31){
						printf("Dia Inválido\n");}
						else{
						printf("%i de Outubro de %i\n", d, a);}
						break;
				case 11:
					if(d<1 || d>30){
						printf("Dia Inválido\n");}
						else{
						printf("%i de Novembro de %i\n", d, a);}
						break;
				case 12:
					if(d<1 || d>31){
						printf("Dia Inválido\n");}
						else{
						printf("%i de Dezembro de %i\n", d, a);}
						break;
               	default:
				printf("Mês Inválido");
			}}
		getch();
		return 0;
}
