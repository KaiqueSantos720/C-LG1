#include <stdio.h>
#include <conio.h>
int main()
{
	int a, b, c;
	printf("Entre com a:");
	scanf("%i", &a);
	printf("Entre com b:");
	scanf("%i", &b);
	printf("Entre com c:");
	scanf("%i", &c);
	if (a<b && a<c && b<c){
		printf("a,b,c:");}
		if (a<b && a<c && c<b){
			printf("a,c,b:");}
			if (b<a && b<c && a<c){
				printf("b,a,c:");}
				if (b<a && b<c && c<a){
					printf("b,c,a:");}
					if (c<a && c<b && a<b){
						printf("c,a,b:");}
						else{
							printf("c,b,a:");}
							return 0;
}
