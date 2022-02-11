#include <stdio.h>
#include <conio.h>
int main()
{
	int va[10], vb[10], i, j=10;
	printf("Coloque os termos da matriz A:\n");
	for(i=0; i<10; i++){
		scanf("%i", &va[i]);}
		printf("\nApresentando os dados da matriz A:\n");
		for(i=0; i<10; i++){
		printf(" %i", va[i]);}
		for(i=0; i<10; i++){
			vb[i]=va[j-1];
			j=j-1;}
		printf("\nApresentando os dados da matriz B:\n");
		for(i=0; i<10; i++){
			printf(" %i", vb[i]);}
			getch();
			return 0;
		}
