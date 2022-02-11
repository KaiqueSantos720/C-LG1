#include <stdio.h>
#include <conio.h>
int main ()
{
float a, b;
printf("Entre com a:");
scanf("%f", &a);
printf("Entre com b:");
scanf("%f", &b);
a=(a + b);
b=(a - b);
a=(a - b);
printf("Novo valor de a:%f\n", a);
printf("Novo valor de b:%f\n", b);
getch();
return 0;
}
