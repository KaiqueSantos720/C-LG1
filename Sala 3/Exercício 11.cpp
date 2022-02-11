#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "portuguese");
int vetor[5], i, maior, menor;
printf("Entre com cinco números inteiros:\n");
for(i=0; i<5; i++){
	scanf("%i", &vetor[i]);}
	maior=vetor[0];
	menor=vetor[0];
	for(i=1; i<5; i++){
		if(vetor[i]>maior){
			maior=vetor[i];}
			if (vetor[i]<menor){
				menor=vetor[i];}}
	printf("O maior número é: %i\n", maior);
	printf("O menor número é: %i\n", menor);
	getch();
	return 0;
	}
