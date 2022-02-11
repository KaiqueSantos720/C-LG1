#include <stdio.h>
#include <conio.h>
int main()
{
	int va[6], i, vb[6], j;
	for(i=0; i<6; i++){
		vb[i]=1;}
	printf("Coloque os termos da matriz A:\n");
	for (i=0; i<6; i++){
		scanf("%i", &va[i]);}
		printf("\nApresentando os dados da matriz A:\n");
		for(i=0; i<6; i++){
			printf(" %i", va[i]);}
			for(i=0; i<6; i++){
					for(j=1; j<=va[i]; j++){
						vb[i]=vb[i]*j;}}
printf("\nApresentando os dados da matriz B:\n");
for(i=0; i<6; i++){
printf(" %i", vb[i]);}
			getch();
			return 0;
}
