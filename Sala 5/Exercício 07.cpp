#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "portuguese");
	int v[20], vb[20], i, j, n, aux, p;
	printf("Preencha o vetor:\n");
	for(i=0; i<20; i++){
		scanf("%i", &v[i]);}
		for(i=0; i<20; i++){
			vb[i]=v[i]+2;}
			for(i=0; i<19; i++){
				for(j=i+1; j<20; j++){
					if(vb[i]>vb[j]){
						aux=vb[i];
						vb[i]=vb[j];
						vb[j]=aux;}}}
						printf("Matriz B em Ordem Crescente\n");
						for(i=0; i<20; i++){
							printf("Posi��o %i - %i\n",i+1, vb[i]);}
do{
							printf("Deseja pesquisar um n�mero?\n");
							printf("1 - Sim\n2 - N�o\n");
							scanf("%i", &p);
							switch(p){
								case 1:
							printf("Escreva um n�mero para pesquisar no vetor B\n");
							scanf("%i", &n);
							for(i=0; i<20; i++){
								if(vb[i]==n){
									printf("%i encontrado na posi��o %i\n",n, i+1);}}
									case 2:
										printf("Programa Encerrado\n"); break;
										default:
											printf("Op��o Inv�lida\n");}}while(p==1); 
									getch();
									return 0;
}
