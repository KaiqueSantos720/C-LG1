#include <stdio.h>
#include <conio.h>
int main()
{
	int va[12], vb[12], vc[12], i, j, aux;
	        printf("Preencha o Vetor A\n");
	        for(i=1; i<=12; i++){
		    scanf("%i", &va[i]);}
	        for(i=1; i<=11; i++){
		    for(j=i+1; j<=12; j++){
			if(va[i]>va[j]){
			aux=va[i];
			va[i]=va[j];
			va[j]=aux;}}}
			printf("Matriz A em Ordem Crescente\n");
	        for(i=1; i<=12; i++){
		    printf("%i\n", va[i]);}
		    getch();
		            printf("Preencha o vetor B\n");
	                for(i=1; i<=12; i++){
	            	scanf("%i", &vb[i]);}
                	for(i=1; i<=11; i++){
    		        for(j=i+1; j<=12; j++){
			        if(vb[i]>vb[j]){
			        aux=vb[i];
		        	vb[i]=vb[j];
			        vb[j]=aux;}}}
			        printf("Matriz B em Ordem Crescente\n");
	                for(i=1; i<=12; i++){
	            	printf("%i\n", vb[i]);}
	            	getch();
	                    for(i=1; i<=12; i++){
			            vc[i]=va[i]+vb[i];}
			                for(i=1; i<=11; i++){
		                    for(j=i+1; j<=12; j++){
		                	if(vc[i]>vc[j]){
		                	aux=vc[i];
		                	vc[i]=vc[j];
		                	vc[j]=aux;}}}
		                	printf("Matriz C em Ordem Crescente\n");
		                	for(i=1; i<=12; i++){
			            	printf("%i + %i = %i\n", va[i], vb[i], vc[i]);}
getch();
return 0;
}	
