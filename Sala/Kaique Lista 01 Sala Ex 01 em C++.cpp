#include <stdio.h>
#include <conio.h>

int main()
{
float d,t,v,lu;
printf("Entre com o tempo:");
scanf("%f",&t);
printf("Entre com a velocidade:");
scanf("%f",&v);
d=t*v;
lu=d/12;
printf("Os valores do t,v,d e lu sao: %f %f %f %f\n",t,v,d,lu);
getch();
return 0;
}
