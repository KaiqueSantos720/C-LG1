#include <stdio.h>
#include <conio.h>
int main()
{
float v, r, h;
printf("Entre com r:");
scanf("%f", &r);
printf("Entre com h:");
scanf("%f", &h);
v=3.14159*r*r*h;
printf("O volume e:%f\n", v);
getch();
return 0;
}
