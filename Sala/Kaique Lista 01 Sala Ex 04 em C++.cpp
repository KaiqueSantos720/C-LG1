#include <stdio.h>
#include <conio.h>
int main()
{
float a, b, c;
printf("Entre com a:");
scanf("%f", &a);
printf("Entre com b:");
scanf("%f", &b);
c=a;
a=b;
b=c;
printf("O novo valor de a e:%f\n", a);
printf("O novo valor de b e:%f\n", b);
getch();
return 0;
}
