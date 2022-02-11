#include <stdio.h>
#include <conio.h>
int main()
{
	int cont, d;
	printf("Numeros divisiveis por 4\n");
	cont=1;
	while(cont<200){
		cont+=1;
		d=cont%4;
		if (d==0){
			printf("%i\n", cont);}}
		return 0;
}
