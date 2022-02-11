#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
struct cadastro{
		char nm[50], e[50];
		int nt, id; 
	};
struct cadastro c[5];
int i, j, x;
char aux[50];
int rotentrada()
{
	    for (i=0; i<5; i++){
		printf("%i - Informe o Nome:\n", i);
		fflush(stdin); fgets(c[i].nm, 50, stdin);
		printf("%i - Informe o Endereco:\n", i);
		fflush(stdin); fgets(c[i].e, 50, stdin);
		printf("%i - Informe o Telefone:\n", i);
		fflush(stdin); scanf("%i", &c[i].nt);
		printf("%i - Informe a Idade:\n", i);
		fflush(stdin); scanf("%i", &c[i].id);}
		return 0;
}
int rotcadastramento()
{
	printf("Cadastramento\n");
	rotentrada();
	return 0;
}
int rotpesquisa()
{
	printf("Pesquisa de Nomes\n");
	printf("Digite o nome:\n");
	fflush(stdin); fgets(aux, 50, stdin);
	i=0; 
	x=0;
	while(i<5 && x==0){
	if(strcmp(aux, c[i].nm)==0){
	x=1;}
	else{
	i=i+1;}
	if(x==1){
	printf("O nome foi encontrada na posicao %i\n", i);
	printf("Mostrando dados da posicao %i\n", i);
	printf("Nome:%s\nEndereco:%s\nIdade:%i\n\nTelefone:%i\n\n\n\n", c[i].nm, c[i].e, c[i].id, c[i].nt);}}
	return 0;
}
int rotclassificacao()
{
	printf("Classificacao Alfabetica\n");
	for (i=0; i<4; i++){
	for(j=i+1; j<5; j++){
	if(strcmp(c[i].nm, c[j].nm)>0){
	strcpy(aux, c[i].nm);
	strcpy(c[i].nm, c[j].nm);
	strcpy(c[j].nm, aux);}}}
	printf("Nomes em Ordem Alfabetica:\n\n\n");
	for(i=0; i<5; i++){
	puts(c[i].nm);}
}
int rotalteracao()
{
	                                        printf("Alteracao de Registros\n");
											printf("Digite a posicao do cadastro que deseja alterar: (0 - 4)\n");
											fflush(stdin);
											scanf("%i", &j);
											for(i=0; i<5; i++){
											if(j==i){
											printf("A posicao corrigida vai ser: %i\n", i);
											printf("Apresentando dados com erros:\n");
											printf("Nome:%s\nEndereco:%s\nIdade:%i\n\nTelefone:%i\n\n\n\n", c[i].nm, c[i].e, c[i].id, c[i].nt);
											printf("O que deseja corrigir\n");
											printf("1-Nome\n2-Endereco\n3-Telefone\n4-idade\n");
											scanf("%i", &x);
											switch(x){
											 			    case 1:
											 				printf("Correcao de Nome\n");
											 				printf("Digite o nome corretamente:\n");
											 				fflush(stdin); fgets(c[i].nm, 50, stdin);
											 				printf("Dado alterado com sucesso\n");
											 				break;
											 				case 2:
											 				printf("Correcao de Endereco\n");
											 				printf("Digite o endereco corretamente:\n");
											 				fflush(stdin); fgets(c[i].e, 50, stdin);
											 				printf("Dado alterado com sucesso\n");
											 				break;
											 				case 3:
											 				printf("Correcao de Telefone\n");
											 				printf("Digite o telefone corretamente:\n");
											 			    fflush(stdin); scanf("%i", &c[i].nt);
											 				printf("Dado alterado com sucesso\n"); break;
											 				case 4:
											 				printf("Correcao de Idade\n");
											 				printf("Digite a idade corretamente:\n");
											 				fflush(stdin); scanf("%i", &c[i].id);
											 				printf("Dado alterado com sucesso\n"); break;
											 				default:
											 					printf("Opcao Invalida\n");}}}
return 0;
}
int rotremocao()
{
	printf("Remocao de Registro\n");
    printf("Digite a posicao do cadastro que deseja remover: (0 - 4)\n");
	fflush(stdin);
	scanf("%i", &j);
	for(i=0; i<5; i++){
	if(j==i){
    printf("A posicao removida vai ser: %i\n", i);
	printf("Nome:%s\nEndereço:%s\nIdade:%i\n\nTelefone:%i\n\n\n\n", c[i].nm, c[i].e, c[i].id, c[i].nt);
	printf("O que deseja remover\n");
	printf("1-Nome\n2-Endereço\n3-Telefone\n4-idade\n");
	scanf("%i", &x);
	switch(x){
	                                                        case 1:
											 				printf("Remocao de Nome\n");
											 				strcpy(c[i].nm," ");
											 				printf("Dado removido com sucesso\n");
											 				break;
											 				case 2:
											 				printf("Remocao de Endereço\n");
											 				strcpy(c[i].e, " ");
											 				printf("Dado removido com sucesso\n");
											 				break;
											 				case 3:
											 				printf("Remocao de Telefone\n");
											 				c[i].nt=0;
											 				printf("Dado removido com sucesso\n");
															break;
											 				case 4:
											 				printf("Remocao de Idade\n");
											 				c[i].id=0;
											 				printf("Dado removido com sucesso\n"); 
															break;
											 				default:
											 				printf("Opcao Invalida\n");}}}
return 0;
}
int main()
{
	int op;
	do{
		printf("Agenda\n");
		printf("Selecione a opcao desejada:\n");
	    printf("1-Cadastramento\n2-Pesquisa de Nomes\n3-Classificacao Alfabetica\n4-Alteracao de Registros\n5-Remocao de Registros\n6-Sair\n");
	    scanf("%i", &op);
	    switch(op){
	    	case 1:
	    		rotcadastramento();
	    		break;
	    	case 2:
	    		rotpesquisa();
	    		break;
	    	case 3:
	    		rotclassificacao();
	    		break;
	    	case 4:
	    		rotalteracao();
	    		break;
	    	case 5:
	    		rotremocao();
	    		break;
	    	case 6:
	    		printf("Programa Encerrado\n");
	    		break;
	    	default:
				printf("Opcao Invalida\n");}
}while(op<6);
getch();
return 0;
}
