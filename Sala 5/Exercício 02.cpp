#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "portuguese");
	int v[8], vb[8], i, j, n, aux;
	printf("Preencha o vetor:\n");
	for(i=0; i<8; i++){
		scanf("%i", &v[i]);}
		for(i=0; i<8; i++){
			vb[i]=v[i]*5;}
			for(i=0; i<7; i++){
				for(j=i+1; j<8; j++){
					if(vb[i]>vb[j]){
						aux=vb[i];
						vb[i]=vb[j];
						vb[j]=aux;}}}
						printf("Matriz B em Ordem Crescente\n");
						for(i=0; i<8; i++){
							printf("Posição %i - %i\n", i+1, vb[i]);}
							printf("Escreva um número para pesquisar no vetor\n");
							scanf("%i", &n);
							for(i=0; i<8; i++){
								if(vb[i]==n){
									printf("%i encontrado na posição %i", n, i+1);}}
									getch();
									return 0;
}
