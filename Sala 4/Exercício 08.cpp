#include <stdio.h>
#include <conio.h>
int main()
{
	int mes;
	printf("Selecione o mes:\n");
	printf("1-janeiro\n2-fevereiro\n3-marco\n4-abril\n5-maio\n6-junho\n7-julho\n8-agosto\n9-setembro\n10-outubro\n11-novembro\n12-dezembro\n");
	scanf("%i", &mes);
	switch (mes){
		case 1:
			printf("janeiro"); break;
			case 2:
				printf("fevereiro"); break;
				case 3:
					printf("marco"); break;
					case 4:
						printf("abril"); break;
						case 5:
							printf("maio"); break;
							case 6:
								printf("junho"); break;
								case 7:
									printf("julho"); break;
									case 8:
										printf("agosto"); break;
										case 9:
											printf("setembro"); break;
											case 10:
												printf("outubro"); break;
												case 11:
													printf("novembro"); break;
													case 12:
														printf("dezembro"); break;
														default:
														printf("mes invalido");
														getch();
														return 0;
	}
}
