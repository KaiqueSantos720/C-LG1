#include <stdio.h>
#include <conio.h>
int main()
{
float imc, m, h;
printf("Entre com m:");
scanf("%f", &m);
printf("Entre com h:");
scanf("%f", &h);
imc=m/(h*h);
printf("O IMC e:%f\n", imc);
getch();
return 0;
}
