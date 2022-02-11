#include <stdio.h>
#include <conio.h>
int main()
{
	int va[8], vb[8], i;
	printf("Coloque os termos da matriz A:\n");
	for(i=0; i<8; i++){
		scanf("%i", &va[i]);}
		printf("\nApresentando os dados da matriz A:\n");
		for(i=0; i<8; i++){
		printf(" %i", va[i]);}
		for(i=0; i<8; i++){
			vb[i]=va[i]*va[i];}
		printf("\nApresentando os dados da matriz B:\n");
		for(i=0; i<8; i++){
			printf(" %i", vb[i]);}
			getch();
			return 0;
		}
