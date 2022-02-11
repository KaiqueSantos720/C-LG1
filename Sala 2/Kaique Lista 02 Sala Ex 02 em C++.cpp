#include <stdio.h>
#include <conio.h>
int main()
{
	float n1, n2, m;
	printf("Entre com n1:");
	scanf("%f", &n1);
	printf("Entre com n2:");
	scanf("%f", &n2);
	m=(n1+n2)/2;
	if (m>=6){
		printf("aluno aprovado:%f\n", m);}
		else{
			printf("aluno reprovado:%f\n", m);}
			float e, nm;
			printf("Entre com o exame:");
			scanf("%f", &e);
			nm=(e+m);
			if (nm>=5){
				printf("aluno aprovado:%f\n", nm);}
				else{
					printf("aluno reprovado:%f\n", nm);}
					return 0;
}
