#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "portuguese");
	int v[12], i, j, aux;
	printf("Preencha o vetor:\n");
	for(i=0; i<12; i++){
		scanf("%i", &v[i]);}
		for(i=0; i<11; i++){
				for(j=i+1; j<12; j++){
					if(v[i]<v[j]){
						aux=v[i];
						v[i]=v[j];
						v[j]=aux;}}}
						printf("Matriz em Ordem Decrescente\n");
						for(i=0; i<12; i++){
							printf("Posição %i - %i\n", i+1, v[i]);}
							getch();
							return 0;
						}
