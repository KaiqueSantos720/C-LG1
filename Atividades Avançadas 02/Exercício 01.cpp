#include <stdio.h>
#include <conio.h>
#include <vector>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "portuguese");
	int t1, t2, c=0, g1, g2;
	char t;
	printf("Ol� Apostador\n");
	    printf("Qual time ganhar�?\n");
	    printf("Time A ou Time B?\n");
	    scanf("%c", &t);
	    switch(t){
	    	case 'a':
		printf("Quantos gols o time A far�?:\n");
		scanf("%i", &t1);
		printf("Quantos gols o time B far�?:\n");
		scanf("%i", &t2);
		printf("Voc� apostou que o time A far� ");
		printf("%i ", t1);
		printf("gols\n");
		printf("Voc� apostou que o time B far� ");
		printf("%i ", t2);
		printf("gols\n");
		printf("Quantos gols o time A fez?\n");
		scanf("%i", &g1);
		printf("Quantos gols o time B fez?\n");
		scanf("%i", &g2);
		printf("A partida foi:\n");
		printf("Time A     Time B\n");
		printf("%i       x      %i\n", g1, g2);
		if (g1>g2 || g1==g2){
			c=c+10;}
		if (t1==g1 && t2!=g2){
			c=c+5;}
	    if (t2==g2 && t1!=g1){
	    	c=c+5;}
	    if (g1-g2==t1-t2){
	    	c=c+10;}
	    if (t1==g1 && t2==g2){
	    	c=c+20;}
	    	printf("Voc� fez");
	    	printf(" %i", c);
	    	printf(" pontos");
	    	break;
	    	case 'b':
	    printf("Quantos gols o time A far�?:\n");
		scanf("%i", &t1);
		printf("Quantos gols o time B far�?:\n");
		scanf("%i", &t2);
		printf("Voc� apostou que o time A far� ");
		printf("%i ", t1);
		printf("gols\n");
		printf("Voc� apostou que o time B far� ");
		printf("%i ", t2);
		printf("gols\n");
		printf("Quantos gols o time A fez?\n");
		scanf("%i", &g1);
		printf("Quantos gols o time B fez?\n");
		scanf("%i", &g2);
		printf("A partida foi:\n");
		printf("Time A     Time B\n");
		printf("%i       x      %i\n", g1, g2);
		if (g1<g2 || g1==g2){
			c=c+10;}
		if (t1==g1 && t2!=g2){
			c=c+5;}
	    if (t2==g2 && t1!=g1){
	    	c=c+5;}
	    if (g1-g2==t1-t2){
	    	c=c+10;}
	    if (t1==g1 && t2==g2){
	    	c=c+20;}
	    	printf("Voc� fez");
	    	printf(" %i", c);
	    	printf(" pontos");
	    	break;
	    	default:
	    		printf("Op��o Inv�lida");
				}
		getch();
		return 0;
}
