#include <stdio.h>
#include <conio.h>
int main()
{
	int va[5], vb[5], vc[10], i, j=0;
	printf("Coloque os termos da matriz A:\n");
	for(i=0; i<5; i++){
		scanf("%i", &va[i]);}
		printf("Coloque os termos da matriz B:\n");
	for(i=0; i<5; i++){
		scanf("%i", &vb[i]);}
printf("\nApresentando os dados da matriz A:\n");
for(i=0; i<5; i++){
printf(" %i", va[i]);}
printf("\nApresentando os dados da matriz B:\n");
for(i=0; i<5; i++){
printf(" %i", vb[i]);}
for(i=0; i<5; i++){
	vc[i]=va[i];}
	for(i=5; i<10; i++){
		vc[i]=vb[j];
		j=j+1;}
printf("\nApresentando os dados da matriz C:\n");
for(i=0; i<10; i++){
printf(" %i", vc[i]);}
getch();
return 0;
}
