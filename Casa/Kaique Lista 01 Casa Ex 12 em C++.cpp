#include <stdio.h>
#include <conio.h>
int main()
{
float despaco, dtempo, vm, sfinal, sinicial, tfinal, tinicial;
printf("Entre com sinicial:");
scanf("%f", &sinicial);
printf("Entre com sfinal:");
scanf("%f", &sfinal);
printf("Entre com tinicial:");
scanf("%f", &tinicial);
printf("Entre com tfinal:");
scanf("%f", &tfinal);
dtempo=(tfinal-tinicial);
despaco=(sfinal-sinicial);
vm=despaco/dtempo;
printf("A velocidade media e:%f\n", vm);
getch();
return 0;
}
