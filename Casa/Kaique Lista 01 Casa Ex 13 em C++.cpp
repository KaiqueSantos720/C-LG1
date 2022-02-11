#include <stdio.h>
#include <conio.h>
int main()
{
float s, t, so, vo, a;
printf("Entre com t:");
scanf("%f", &t);
so=2;
vo=2;
a=10;
s=(so+vo)*t+(1/2)*a*(t*t);
printf("O movimento uniforme variado e:%f\n", s);
getch();
return 0;
}
