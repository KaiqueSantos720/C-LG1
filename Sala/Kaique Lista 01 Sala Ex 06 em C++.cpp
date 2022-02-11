#include <stdio.h>
#include <conio.h>
int main()
{
float p, v, tx, t;
printf("Entre com v:");
scanf("%f", &v);
printf("Entre com tx:");
scanf("%f", &tx);
printf("Entre com t:");
scanf("%f", &t);
p=v+(v*(tx/100))*t;
printf("A prestacao e:%f\n", p);
getch();
return 0;
}
