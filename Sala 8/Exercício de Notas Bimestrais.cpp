#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
struct aluno{
	char nm[50];
	float n1, n2, m;
};
struct aluno a[20];
int i;
int rotentrada()
{
	for(i=0; i<20; i++){
	printf("%i - Informe o Nome:\n", i);
	fflush(stdin); fgets(a[i].nm, 50, stdin);
	printf("%i - Informe a Nota 1:\n", i);
	fflush(stdin); scanf("%f", &a[i].n1);
	printf("%i - Informe a Nota 2:\n", i);
	fflush(stdin); scanf("%f", &a[i].n2);}
    return 0;
}
int rotcadastramento()
{
	printf("Cadastramento\n\n\n");
	rotentrada();
	return 0;
}
int rotcorrecao()
{
	int j, x;
	printf("Correcao de Registros\n");
    printf("Digite a posicao do cadastro que deseja alterar: (0 - 19)\n");
	fflush(stdin);
	scanf("%i", &j);
	for(i=0; i<20; i++){
	if(j==i){
	printf("A posição corrigida vai ser: %i\n", i);
	printf("Apresentando dados com erros:\n");
	printf("Nome:%s\nNota 1:%f\nNota 2:%f\n", a[i].nm, a[i].n1, a[i].n2);
	printf("O que deseja corrigir?\n");
	printf("1-Nome\n2-Nota 1\n3-Nota 2\n");
	scanf("%i", &x);
	switch(x){
	case 1:
	printf("Correcao de Nome\n");
	printf("Digite o nome corretamente:\n");
	fflush(stdin); fgets(a[i].nm, 50, stdin);
	printf("Dado alterado com sucesso\n");
	break;
	case 2:
	printf("Correcao de Nota 1\n");
	printf("Digite a Nota 1 corretamente:\n");
	fflush(stdin); scanf("%f", &a[i].n1);
	printf("Dado alterado com sucesso\n");
    break;
    case 3:
	printf("Correcao de Nota 2\n");
	printf("Digite a Nota 2 corretamente:\n");
	fflush(stdin); scanf("%f", &a[i].n2);
	printf("Dado alterado com sucesso\n");
    break;
    default:
	printf("Opcao Invalida\n");
}}}
return 0;
}
int rotclassificacao()
{
	printf("Apresentando os Dados, seguindo a ordem de cadastramento:\n");
	for(i=0; i<20; i++){
	printf("Nome:%s\nNota 1:%f\nNota 2:%f\nMedia:%f\n\n\n", a[i].nm, a[i].n1, a[i].n2, a[i].m);}
	return 0;
}
int rotpesquisa()
{
	int aux;
	char pesq[50];
	printf("Pesquisa de Nomes\n");
	printf("Digite o nome:\n");
	fflush(stdin); fgets(pesq, 50, stdin);
	i=0; 
	aux=0;
	while(i<20 && aux==0){
	if(strcmp(pesq, a[i].nm)==0){
	aux=1;}
	else{
	i=i+1;}
	if(aux==1){
	printf("O nome foi encontrada na posicao %i\n", i);
	printf("Mostrando dados da posicao %i\n", i);
	printf("Nome:%s\nNota 1:%f\nNota 2:%f\nMedia:%f\n\n\n", a[i].nm, a[i].n1, a[i].n2, a[i].m);}}
	return 0;
}
int rotaprovados()
{
	for(i=0; i<20; i++){
		if(a[i].m>=7){
			printf("\nParabens %s voce foi aprovado com a media: %f\n", a[i].nm, a[i].m);}}
			return 0;
}
int rotreprovados()
{
	for(i=0; i<20; i++){
		if(a[i].m<7){
			printf("\nO aluno %s foi reprovado com a media %f\n", a[i].nm, a[i].m);}}
			return 0;
}
int main()
{
	int op;
	do{
		for(i=0; i<20; i++){
	    a[i].m=(a[i].n1+a[i].n2)/2;}
		printf("Selecione a opcao desejada:\n");
	    printf("1-Cadastramento\n2-Classificacao\n3-Correcao de Registros\n4-Pesquisa por Nome\n5-Alunos Aprovados\n6-Alunos Reprovados\n7-Sair\n");
	    scanf("%i", &op);
	    switch(op){
	    	case 1:
	    		rotcadastramento(); 
				break;
			case 2:
				rotclassificacao();
				break;
			case 3:
				rotcorrecao();
				break;
			case 4:
				rotpesquisa();
				break;
			case 5:
				rotaprovados();
				break;
			case 6:
				rotreprovados();
				break;
			case 7:
				printf("Programa Encerrado\n");
				break;
			default:
				printf("Opcao Invalida\n");
		}
	}while(op<7);
	getch();
	return 0;
}
