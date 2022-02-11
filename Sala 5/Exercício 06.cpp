#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "portuguese");
	int v[30], vb[30], i, j, n, aux;
	printf("Preencha o vetor:\n");
	for(i=0; i<30; i++){
		scanf("%i", &v[i]);}
		for(i=0; i<30; i++){
			vb[i]=v[i]*v[i]*v[i];}
			printf("Matriz B\n");
			for(i=0; i<30; i++){
				printf("Posição %i - %i\n", i+1, vb[i]);}
				printf("\n");
			printf("Escreva um número para pesquisar no vetor B\n");
							scanf("%i", &n);
							for(i=0; i<30; i++){
								if(vb[i]==n){
									printf("%i encontrado na posição %i\n", n, i+1);}}
									getch();
									return 0;
}
