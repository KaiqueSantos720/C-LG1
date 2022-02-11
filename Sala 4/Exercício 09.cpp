#include <stdio.h>
#include <conio.h>
int main()
{
	int curso;
	printf("Selecione o curso:\n");
	printf("1-Engenharia\n2-Edificacoes\n3-Sistemas Eletricos\n4-Turismo\n5-Analise de Sistemas\n");
	scanf("%i", &curso);
	switch (curso){
		case 1:
			printf("Engenharia"); break;
			case 2:
				printf("Edificacoes"); break;
				case 3:
					printf("Sistemas Eletricos"); break;
					case 4:
						printf("Turismo"); break;
						case 5:
							printf("Analise de Sistemas"); break;
							default:
								printf("Curso Invalido");
						}
						getch();
						return 0;
						}
