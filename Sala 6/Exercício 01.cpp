#include <stdio.h>
#include <conio.h>
int main()
{
	int va[5][3], vb[5][3], vc[5][3], l, c;
	printf("Entre com os dados da Matriz A:\n");
	for(l=0; l<5; l++){
		for(c=0; c<3; c++){
			scanf("%i", &va[l][c]);}}
			printf("Entre com os dados da Matriz B:\n");
			for(l=0; l<5; l++){
				for(c=0; c<3; c++){
					scanf("%i", &vb[l][c]);}}
					for(l=0; l<5; l++){
						for(c=0; c<3; c++){
							vc[l][c]=va[l][c]+vb[l][c];}}
							printf("Apresentando os dados da Matriz C:\n");
							for(l=0; l<5; l++){
								for(c=0; c<3; c++){
									printf(" %i", vc[l][c]);}
							        printf("\n");}
							        getch();
							        return 0;
}
