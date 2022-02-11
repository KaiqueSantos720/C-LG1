#include <stdio.h>
#include <conio.h>
#include <vector>
int main()
    {
    int tamanho=10, vec[tamanho], i=0, maior, menor;
    do{
    printf("Introduza o tamanho do vector: ");
    scanf("%d", &tamanho);
    for(i=0; i<tamanho; i++){
        printf("Preencha o vector: ");
        scanf("%d", &vec[i]);}
    for(i=0; i<tamanho; i++){
    printf(" %d", vec[i]);}
maior=vec[0];
	menor=vec[0];
	for(i=1; i<tamanho; i++){
		if(vec[i]>maior){
			maior=vec[i];}
			if (vec[i]<menor){
				menor=vec[i];}}
	printf("\nO maior numero e: %i\n", maior);
	printf("O menor numero e: %i\n", menor);
	int f1=0, f2=0, f3=0, f4=0, f5=0;
	for(i=0; i<tamanho; i++){
	if (vec[i]<0){
		f1++;
		printf("Faixa 1:");
		printf(" %i\n", vec[i]);}
		if(vec[i]>=0 && vec[i]<15){
			f2++;
			printf("Faixa 2:");
			printf(" %i\n", vec[i]);}
			if(vec[i]>=15 && vec[i]<100){
				f3++;
				printf("Faixa 3:");
				printf(" %i\n", vec[i]);}
				if (vec[i]>=1000){
					f4++;
					printf("Faixa 4:");
					printf(" %i\n", vec[i]);}
					if(vec[i]>=101 && vec[i]<1000){
						f5++;
						printf("Faixa 5:");
						printf(" %i\n", vec[i]);}}
						printf("A quantidade de numeros na faixa 1 e: %i\n", f1);
						printf("A quantidade de numeros na faixa 2 e: %i\n", f2);
						printf("A quantidade de numeros na faixa 3 e: %i\n", f3);
						printf("A quantidade de numeros na faixa 4 e: %i\n", f4);
						printf("A quantidade de numeros na faixa 5 e: %i\n", f5);
						int soma=0, imp=0, par=0;
						for(i=0; i<tamanho; i++){
        soma=soma+vec[i];}
        printf("A media e: %i\n", soma/tamanho);  
		for(i=0; i<tamanho; i++){
			if (vec[i]%2==0){
				par++;
				printf("Par:");
				printf(" %i\n", vec[i]);}
				if (vec[i]%2!=0){
					imp++;
					printf("Impar:");
					printf(" %i\n", vec[i]);}}  
					printf("A quantidade de pares e: %i\n", par);
					printf("A quantidade de impares e: %i\n", imp);
					}
					while(tamanho);{}
    getch();
    return 0;
    }
