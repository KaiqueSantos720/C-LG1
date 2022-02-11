#include <stdio.h>
#include <conio.h>
int main()
{
	float n1, n2;
	printf("Entre com n1:");
	scanf("%f", &n1);
	printf("Entre com n2:");
	scanf("%f", &n2);
	float m, e;
	m=(n1+n2)/2;
	if (n1<0 || n2<0 || n1>10 || n2>10){
		e=1;
		printf("a quantidade de erro e:%f\n", e);}
		if (n1<0 && n2<0){
			e=2;
			printf("a quantidade de erros sao:%f\n", e);}
			if (n1<0 && n2>10){
				e=2;
				printf("a quantidade de erros sao:%f\n", e);}
				if (n1>10 && n2<0){
					e=2;
					printf("a quantidade de erros sao:%f\n", e);}
					if (n1>10 && n2>10){
						e=2;
						printf("a quantidade de erros sao:%f\n", e);}
							if (n1>=0 && n1<=10 && n2>=0 && n2<=10){
							printf("nao ha erros a media e:%f\n", m);}
							return 0;
}
