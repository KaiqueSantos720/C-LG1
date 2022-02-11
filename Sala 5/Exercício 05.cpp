#include <stdio.h>
#include <conio.h>
int main()
{
	int v[20], i, j=0, vb[30], aux, vc[50];
	printf("Preencha o vetor A\n");
	for(i=0; i<20; i++){
		scanf("%i", &v[i]);}
	printf("Preencha o vetor B\n");
	for(i=0; i<30; i++){
		scanf("%i", &vb[i]);}
		for(i=0; i<20; i++){
			vc[i]=v[i];}
			for(i=20; i<50; i++){
				vc[i]=vb[j];
				j=j+1;}
				for(i=0; i<49; i++){
		for(j=i+1; j<50; j++){
			if(vc[i]<vc[j]){
			aux=vc[i];
			vc[i]=vc[j];
			vc[j]=aux;}}}
			printf("Matriz C em Ordem Decrescente\n");
			for(i=0; i<50; i++){
				printf("%i\n", vc[i]);}
				getch();
				return 0;
}
