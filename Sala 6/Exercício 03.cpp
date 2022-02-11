
#include <stdio.h>
#include <conio.h>
int main()
{
	int va[10], vb[10][3], c, l, j, fat[10];
	printf("Entre com os dados da Matriz A:\n");
	for(l=0; l<10; l++){
		scanf("%i", &va[l]);}
		c=0;
		for(l=0; l<10; l++){
			vb[l][c]=va[l]+5;}
			for(l=0; l<10; l++){
			    fat[l]=1;}
			for(l=0; l<10; l++){
			    for(j=1; j<=va[l]; j++){
			        fat[l]=fat[l]*j;}}
			    c=1;
			        for(l=0; l<10; l++){
			            vb[l][c]=fat[l];}
			            c=2;
			            for(l=0; l<10; l++){
			                vb[l][c]=va[l]*va[l];}
							printf("Apresentando os dados da Matriz C:\n");
							for(l=0; l<10; l++){
								for(c=0; c<3; c++){
									printf(" %i", vb[l][c]);}
									printf("\n");}
			getch();
			return 0;	
}
