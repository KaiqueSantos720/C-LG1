#include <stdio.h>
#include <conio.h>
#include <vector>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "portuguese");
	float s, s1, s2;
	char nome[100], sobrenome[100];
	printf("Qual � o seu nome?\n");
	scanf("%s", &nome);
	printf("Qual � o seu sobrenome?\n");
	scanf("%s", &sobrenome);
	printf("Qual � o seu sal�rio atual?\n");
	scanf("%f", &s);
	if (s<=0){
		printf("Sal�rio Inv�lido");}
	if (s>0 && s<=400){
		printf("Seu nome �: %s %s\n", nome, sobrenome);
		printf("Aumento de 15 por cento no sal�rio\n");
		printf("Seu sal�rio atual �: %f\n", s);
		s1=s*0.15;
		s2=s1+s;
		printf("Seu novo sal�rio ser�: %f\n", s2);}
	if (s>=401 && s<=700){
		printf("Seu nome �: %s %s\n", nome, sobrenome);
		printf("Aumento de 12 por cento no sal�rio\n");
		printf("Seu sal�rio atual �: %f\n", s);
		s1=s*0.12;
		s2=s1+s;
		printf("Seu novo sal�rio ser�: %f\n", s2);}
	if (s>=701 && s<=1000){
		printf("Seu nome �: %s %s\n", nome, sobrenome);
		printf("Aumento de 10 por cento no sal�rio\n");
		printf("Seu sal�rio atual �: %f\n", s);
		s1=s*0.1;
		s2=s1+s;
		printf("Seu novo sal�rio ser�: %f\n", s2);}
	if (s>=1001 && s<=1800){
		printf("Seu nome �: %s %s\n", nome, sobrenome);
		printf("Aumento de 7 por cento no sal�rio\n");
		printf("Seu sal�rio atual �: %f\n", s);
		s1=s*0.07;
		s2=s1+s;
		printf("Seu novo sal�rio ser�: %f\n", s2);}	
	if (s>=1801 && s<=2500){
		printf("Seu nome �: %s %s\n", nome, sobrenome);
		printf("Aumento de 4 por cento no sal�rio\n");
		printf("Seu sal�rio atual �: %f\n", s);
		s1=s*0.04;
		s2=s1+s;
		printf("Seu novo sal�rio ser�: %f\n", s2);}
	if (s>2500){
		printf("Seu nome �: %s %s\n", nome, sobrenome);
		printf("N�o h� aumento no sal�rio\n");
		printf("Seu sal�rio atual �: %f\n", s);
		printf("Seu novo sal�rio ser�: %f\n", s);}
	getch();
	return 0;
}
