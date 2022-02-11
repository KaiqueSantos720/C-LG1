#include <stdio.h>
#include <conio.h>
int main()
{
	int va[7], vb[7], vc[7][2], l, c;
	printf("Entre com os dados da Matriz A:\n");
	for(l=0; l<7; l++){
		scanf("%i", &va[l]);}
		printf("Entre com os dados da Matriz B:\n");
		for(l=0; l<7; l++){
			scanf("%i", &vb[l]);}
			c=0;
			for(l=0; l<7; l++){
				vc[l][c]=va[l];}
				c=1;
				for(l=0; l<7; l++){
					vc[l][c]=vb[l];}
					printf("Apresentando os dados da Matriz C:\n");
					for(l=0; l<7; l++){
						for(c=0; c<2; c++){
							printf(" %i", vc[l][c]);}
					        printf("\n");}
					        getch();
					        return 0;
}
