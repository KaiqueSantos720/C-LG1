#include <stdio.h>
#include <conio.h>
int main()
{
	int va[5], vb[5], i;
	printf("Coloque os termos da matriz A:\n");
	for(i=0; i<5; i++){
		scanf("%i", &va[i]);}
		printf("\nApresentando os dados da matriz A:\n");
		for(i=0; i<5; i++){
		printf(" %i", va[i]);}
		for(i=0; i<5; i++){
			vb[i]=va[i]*3;}
		printf("\nApresentando os dados da matriz B:\n");
		for(i=0; i<5; i++){
			printf(" %i", vb[i]);}
			getch();
			return 0;
		}
