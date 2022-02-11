#include <stdio.h>
#include <conio.h>
int main()
{
	char fp;
	printf("Selecione a forma de pagamento:\n");
	printf("c cartao\nb boleto\nd debito\n");
	scanf("%c", &fp);
	switch (fp){
		case 'c':
			printf("cartao"); break;
			case 'b':
				printf("boleto"); break;
				case 'd':
					printf("debito"); break;
														default:
														printf("opcao invalida");
														return 0;
	}
}
