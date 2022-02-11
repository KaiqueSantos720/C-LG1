#include <stdio.h>
#include <conio.h>
int main()
{
float c,f;
printf("Entre com a temperatura em Fahrenheit:");
scanf("%f", &f);
c=(((f-32)*5)/9);
printf("A temperatura em Celsius eh:%f\n", c);
getch();
return 0;
}
