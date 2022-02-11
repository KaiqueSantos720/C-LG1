#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "portuguese");
int va[5], i, vb[5], o;
	printf("Coloque os termos da matriz:\n");
	for (i=0; i<5; i++){
		scanf("%i", &va[i]);}
		printf("\nApresentando os dados da matriz:\n");
		for(i=0; i<5; i++){
			printf(" %i", va[i]);}
			printf("\nOpções\n");
			printf("1-Raiz Quadrada\n2-Potência de 3\n3-Fatorial\n");
			scanf("%i", &o);
			switch(o){
				case 1:
		vb[0]=sqrt(va[0]);
        vb[1]=sqrt(va[1]);
        vb[2]=sqrt(va[2]);
        vb[3]=sqrt(va[3]);
        vb[4]=sqrt(va[4]);
		printf("A raiz quadrada da matriz é:\n");
		for(i=0; i<5; i++){
			printf(" %i", vb[i]);}
			break;
			case 2:
				vb[0]=va[0]*va[0]*va[0];
				vb[1]=va[1]*va[1]*va[1];
				vb[2]=va[2]*va[2]*va[2];
				vb[3]=va[3]*va[3]*va[3];
				vb[4]=va[4]*va[4]*va[4];
				printf("Os dados da matriz elevada a 3 é:\n");
				for(i=0; i<5; i++){
			printf(" %i", vb[i]);}
			break;
			case 3:
	vb[0]=1;
	vb[1]=1;
	vb[2]=1;
	vb[3]=1;
	vb[4]=1;
	        for (i=1; i<=va[0]; i++){
				vb[0]=vb[0]*i;}
			for (i=1; i<=va[1]; i++){
				vb[1]=vb[1]*i;}
			for (i=1; i<=va[2]; i++){
				vb[2]=vb[2]*i;}
			for (i=1; i<=va[3]; i++){
				vb[3]=vb[3]*i;}
			for (i=1; i<=va[4]; i++){
				vb[4]=vb[4]*i;}
				printf("O fatorial da matriz é:\n");
				for(i=0; i<5; i++){
					printf(" %i", vb[i]);}
					break;
					default:
					printf("Opção Inválida");	
			}
	getch();
	return 0;		
}
