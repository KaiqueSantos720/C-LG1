#include <stdio.h>
#include <conio.h>
int main()
{
	int mes;
	printf("Selecione o mes:");
	printf("jan, fev, mar, abr, mai, jun, jul, ago, set, out, nov, dez:");
	scanf("%i", &mes);
	int ano;
	printf("Entre com o ano:");
	scanf("%i", &ano);
	printf("o ano e:%i\n", ano);
	switch (mes){
		case 1:
			printf("jan tem 31 dias"); break;
			case 2:
				printf("fev tem 28 ou 29 dias"); break;
				case 3:
					printf("mar tem 31 dias"); break;
					case 4:
						printf("abr tem 30 dias"); break;
						case 5:
							printf("mai tem 31 dias"); break;
							case 6:
								printf("jun tem 30 dias"); break;
								case 7:
									printf("jul tem 31 dias"); break;
									case 8:
										printf("ago tem 31 dias"); break;
										case 9:
											printf("set tem 30 dias"); break;
											case 10:
												printf("out tem 31 dias"); break;
												case 11:
													printf("nov tem 30 dias"); break;
													case 12:
														printf("dez tem 31 dias"); break;
														default:
														printf("mes invalido");
														return 0;
	}
}
