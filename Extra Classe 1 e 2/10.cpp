#include <stdio.h>
#include <conio.h>
int main()
{
	char bancoifsp;
	printf("selecione o que quer fazer no banco ifsp:\n");
	printf("1 deposito\n2 saque\n3 extrato\n4 transferencia\ne encerrar\n");
	scanf("%c", &bancoifsp);
	switch (bancoifsp){
		case '1':
			printf("operacao de deposito"); break;
			case '2':
				printf("operacao de saque"); break;
				case '3':
					printf("operacao de extrato"); break;
					case '4':
						printf("operacao de transferencia"); break;
						case 'e':
							printf("encerrando operacoes"); break;
							default:
								printf("opcao invalida");
								return 0;
	}
}
