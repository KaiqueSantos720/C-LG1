#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "portuguese");
	int v[15], vb[15], i, j, aux, n;
	printf("Preencha o vetor A:\n");
	for(i=0; i<15; i++){
		scanf("%i", &v[i]);}
		for(i=0; i<15; i++){
				vb[i]=1;}
				for(i=0; i<15; i++){
					for(j=1; j<=v[i]; j++){
						vb[i]=vb[i]*j;}}
						for(i=0; i<14; i++){
				for(j=i+1; j<15; j++){
					if(vb[i]>vb[j]){
						aux=vb[i];
						vb[i]=vb[j];
						vb[j]=aux;}}}
						printf("Matriz B em Ordem Crescente\n");
						for(i=0; i<15; i++){
							printf("%i\n", vb[i]);}
							printf("Cálculo de Fatorial\n");
							for(i=0; i<15; i++){
								if(vb[i] % v[i]==0){
								printf("%i é o fatorial de %i\n", vb[i], v[i]);}}
							getch();
							return 0;
}
