#include <stdio.h>
#include <conio.h>
int main()
{
	int v[9], i;
	printf("Entre com RAV:\n");
	printf("Coloque um digito por vez\n");
	for (i=0; i<9; i++){
		scanf("%i", &v[i]);}
		if(v[0]>9 || v[1]>9 || v[2]>9 || v[3]>9 || v[4]>9 || v[5]>9 || v[6]>9 || v[7]>9 || v[8]>9){
			printf("RA Invalido");}
			else{
		printf("O RAV eh:");
		for(i=0; i<9; i++){
        printf("%i", v[i]);}
        printf("\n");
		printf("O RAC eh:%i%i%i%i%i%i%i%i%i", v[0], v[1], v[7], v[6], v[4], v[5], v[2], v[3], v[8]);}
		getch();
		return 0;
}
