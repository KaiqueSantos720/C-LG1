#include <stdio.h>
#include <conio.h>
int main()
{
float p1, p2, ativ, m;
printf("Entre com p1:");
scanf("%f", &p1);
printf("Entre com p2:");
scanf("%f", &p2);
printf("Entre com ativ:");
scanf ("%f", &ativ);
m=((p1*4)+(p2*4)+(ativ*2))/10;
printf("A media e:%f\n", m);
getch();
return 0;
}
