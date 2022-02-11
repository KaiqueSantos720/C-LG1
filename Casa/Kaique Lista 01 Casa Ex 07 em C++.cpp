#include <stdio.h>
#include <conio.h>
int main()
{
float a, v, r;
printf("Entre com r:");
scanf("%f", &r);
a=4*3.14159*(r*r);
v=(4/3)*3.14159*(r*r*r);
printf("A area e:%f\n", a);
printf("O volume e:%f\n", v);
getch();
return 0;
}
