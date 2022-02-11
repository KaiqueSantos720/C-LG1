#include <stdio.h>
#include <conio.h>
int main()
{
	int saldo;
	printf("saldo:");
	printf("1000, 5000, 3000:");
	scanf("%i", &saldo);
	switch (saldo){
		case 1:
			printf("o saldo e 800"); break;
			case 2:
				printf("o saldo e 2800"); break;
				case 3:
					printf("o saldo e 1800"); break;
														default:
														printf("saldo invalido");
														return 0;
	}
}
