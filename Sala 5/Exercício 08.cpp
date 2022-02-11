#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "portuguese");
	int v[40], i, j, n, aux;
	printf("Preencha o vetor:\n");
	for(i=0; i<40; i++){
		scanf("%i", &v[i]);}
		for(i=0; i<39; i++){
				for(j=i+1; j<40; j++){
					if(v[i]>v[j]){
						aux=v[i];
						v[i]=v[j];
						v[j]=aux;}}}
						printf("Matriz em Ordem Crescente\n");
						for(i=0; i<40; i++){
							printf("Posição %i - %i\n",i+1,  v[i]);}
							printf("Escreva um número para pesquisar no vetor\n");
							scanf("%i", &n);
							for(i=0; i<40; i++){
								if(v[i]==n){
									printf("%i encontrado na posição %i\n", n, i+1);}}
									getch();
									return 0;
}
