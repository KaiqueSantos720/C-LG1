#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
struct cadastro{
		char nm[50], e[50];
		int nt, id; 
	};
int main()
{
	setlocale(LC_ALL, "portuguese");
	int i, j, op, x;
	char aux[50];
	struct cadastro c[5]; 
	do{
		printf("Agenda\n");
		printf("Selecione a op��o desejada:\n");
	    printf("1-Cadastramento\n2-Pesquisa de Nomes\n3-Classifica��o Alfab�tica\n4-Altera��o de Registro\n5-Sair\n");
	    scanf("%i", &op);
	    switch(op){
	    	case 1:
			printf("Cadastramento\n");
			for (i=0; i<5; i++){
		printf("%i - Informe o Nome:\n", i);
		fflush(stdin); fgets(c[i].nm, 50, stdin);
		printf("%i - Informe o Endere�o:\n", i);
		fflush(stdin); fgets(c[i].e, 50, stdin);
		printf("%i - Informe o Telefone:\n", i);
		fflush(stdin); scanf("%i", &c[i].nt);
		printf("%i - Informe a Idade:\n", i);
		fflush(stdin); scanf("%i", &c[i].id);
	}
	printf("Exibi��o dos cadastros\n\n\n");
	getch();
			for(i=0; i<5; i++){
			printf("Nome:%s\nEndere�o:%s\nIdade:%i\n\nTelefone:%i\n\n\n\n", c[i].nm, c[i].e, c[i].id, c[i].nt);} 
			getch();
			break;
			                case 2:
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
						    printf("O nome foi encontrada na posi��o %i\n", i);
							printf("Mostrando dados da posi��o %i\n", i);
							printf("Nome:%s\nEndere�o:%s\nIdade:%i\n\nTelefone:%i\n\n\n\n", c[i].nm, c[i].e, c[i].id, c[i].nt);}}
						    getch();
							break;
								case 3:
								printf("Classifica��o Alfab�tica\n");
								for (i=0; i<4; i++){
								for(j=i+1; j<5; j++){
								if(strcmp(c[i].nm, c[j].nm)>0){
								strcpy(aux, c[i].nm);
								strcpy(c[i].nm, c[j].nm);
								strcpy(c[j].nm, aux);}}}
								printf("Nomes em Ordem Alfab�tica:\n\n\n");
								for(i=0; i<5; i++){
								puts(c[i].nm);} 
								getch();
								break;
								             case 4:
											 printf("Altera��o de Registro\n");
											 printf("Digite a posi��o do cadastro que deseja alterar: (0 - 4)\n");
											 fflush(stdin);
											 scanf("%i", &j);
											 for(i=0; i<5; i++){
											 	if(j==i){
											 		printf("A posi��o corrigida vai ser: %i\n", i);
											 		printf("Apresentando dados com erros:\n");
											 		printf("Nome:%s\nEndere�o:%s\nIdade:%i\n\nTelefone:%i\n\n\n\n", c[i].nm, c[i].e, c[i].id, c[i].nt);
											 		printf("O que deseja corrigir?\n");
											 		printf("1-Nome\n2-Endere�o\n3-Telefone\n4-idade\n");
											 		scanf("%i", &x);
											 		switch(x){
											 			    case 1:
											 				printf("Corre��o de Nome\n");
											 				printf("Digite o nome corretamente:\n");
											 				fflush(stdin); fgets(c[i].nm, 50, stdin);
											 				printf("Dado alterado com sucesso\n");
											 				break;
											 				case 2:
											 				printf("Corre��o de Endere�o\n");
											 				printf("Digite o endere�o corretamente:\n");
											 				fflush(stdin); fgets(c[i].e, 50, stdin);
											 				printf("Dado alterado com sucesso\n");
											 				break;
											 				case 3:
											 				printf("Corre��o de Telefone\n");
											 				printf("Digite o telefone corretamente:\n");
											 			    fflush(stdin); scanf("%i", &c[i].nt);
											 				printf("Dado alterado com sucesso\n"); break;
											 				case 4:
											 				printf("Corre��o de Idade\n");
											 				printf("Digite a idade corretamente:\n");
											 				fflush(stdin); scanf("%i", &c[i].id);
											 				printf("Dado alterado com sucesso\n"); break;
											 				default:
											 					printf("Op��o Inv�lida\n");}}}
													        break;
													        case 5:
															printf("Programa Encerrado\n");
															getch();
															break;
															           default:
																	   printf("Op��o Inv�lida\n");
																	   getch();}
	}while(op<5);
	getch();
	return 0;
}
