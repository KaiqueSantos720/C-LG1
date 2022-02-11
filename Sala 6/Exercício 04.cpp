#include <stdio.h>
#include <conio.h>
int main()
{
	int va[4], vb[4], vc[4][2], l, c;
	printf("Entre com os dados da Matriz A:\n");
	for(l=0; l<4; l++){
	scanf("%i", &va[l]);}
	printf("Entre com os dados da Matriz B:\n");
	for(l=0; l<4; l++){
	scanf("%i", &vb[l]);}
	c=0;
	for(l=0; l<4; l++){
			vc[l][c]=va[l]*2;}
			c=1;
			for(l=0; l<4; l++){
				vc[l][c]=vb[l]-5;}
				printf("Apresentando os dados da Matriz C:\n");
	for(l=0; l<4; l++){
		for(c=0; c<2; c++){
			printf(" %i", vc[l][c]);}
		printf("\n");}
	getch();
	return 0;
}
