#include <stdio.h>
#include <conio.h>
int main()
{
	int a, b, c;
	printf("Entre com um numero positivo a:");
	scanf("%i", &a);
	printf("Entre com um numero positivo b:");
	scanf("%i", &b);
	printf("Entre com um numero positivo c:");
	scanf("%i", &c);
	if (a<0 || b<0 || c<0){
        printf("ha valor negativo");}
        else{
	if (a<b && a<c && b<c){
		printf("a:%i\n", a);}
		if (a<b && a<c && c<b){
			printf("a:%i\n", a);}
			if (b<a && b<c && a<c){
				printf("b:%i\n", b);}
				if (b<a && b<c && c<a){
					printf("b:%i\n", b);}
					if (c<a && c<b && a<b){
						printf("c:%i\n", c);}
						if (c<a && c<b && b<a){
							printf("c:%i\n", c);}
								if (a==b && a==c && b==c){
									printf("os tres valores sao iguais:%i\n", a);}
									if (a==b && a<c){
										printf("a e b sao iguais e menores que c:%i\n", a);}
										if (a==c && a<b){
											printf("a e c sao iguais e menores que b:%i\n", a);}
											if (b==c && b<a){
												printf("b e c sao iguais e menores que a:%i\n", b);}
												if (a==b && a>c){
													printf("c:%i\n", c);}
													if (a==c && a>b){
														printf("b:%i\n", b);}
														if (b==c && b>a){
															printf("a:%i\n", a);}
										}
							return 0;
}
