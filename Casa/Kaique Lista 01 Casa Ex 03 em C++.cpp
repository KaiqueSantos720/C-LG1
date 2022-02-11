#include <stdio.h>
#include <conio.h>
int main()
{
float la, lp, ap, aa, r1, r2;
printf("Entre com la:");
scanf("%f", &la);
printf("Entre com lp:");
scanf("%f", &lp);
printf("Entre com ap:");
scanf("%f", &ap);
printf("Entre com aa:");
scanf("%f", &aa);
la=la/100;
aa=aa/100;
r1=la*aa;
r2=lp*ap;
r1=r1/r2;
printf("A quantidade de azulejos sao:%f\n", r1);
getch();
return 0;
}
