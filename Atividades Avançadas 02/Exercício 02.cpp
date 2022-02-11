#include <stdio.h>
#include <conio.h>
#include <vector>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "portuguese");
	float s, s1, s2;
	char nome[100], sobrenome[100];
	printf("Qual é o seu nome?\n");
	scanf("%s", &nome);
	printf("Qual é o seu sobrenome?\n");
	scanf("%s", &sobrenome);
	printf("Qual é o seu salário atual?\n");
	scanf("%f", &s);
	if (s<=0){
		printf("Salário Inválido");}
	if (s>0 && s<=400){
		printf("Seu nome é: %s %s\n", nome, sobrenome);
		printf("Aumento de 15 por cento no salário\n");
		printf("Seu salário atual é: %f\n", s);
		s1=s*0.15;
		s2=s1+s;
		printf("Seu novo salário será: %f\n", s2);}
	if (s>=401 && s<=700){
		printf("Seu nome é: %s %s\n", nome, sobrenome);
		printf("Aumento de 12 por cento no salário\n");
		printf("Seu salário atual é: %f\n", s);
		s1=s*0.12;
		s2=s1+s;
		printf("Seu novo salário será: %f\n", s2);}
	if (s>=701 && s<=1000){
		printf("Seu nome é: %s %s\n", nome, sobrenome);
		printf("Aumento de 10 por cento no salário\n");
		printf("Seu salário atual é: %f\n", s);
		s1=s*0.1;
		s2=s1+s;
		printf("Seu novo salário será: %f\n", s2);}
	if (s>=1001 && s<=1800){
		printf("Seu nome é: %s %s\n", nome, sobrenome);
		printf("Aumento de 7 por cento no salário\n");
		printf("Seu salário atual é: %f\n", s);
		s1=s*0.07;
		s2=s1+s;
		printf("Seu novo salário será: %f\n", s2);}	
	if (s>=1801 && s<=2500){
		printf("Seu nome é: %s %s\n", nome, sobrenome);
		printf("Aumento de 4 por cento no salário\n");
		printf("Seu salário atual é: %f\n", s);
		s1=s*0.04;
		s2=s1+s;
		printf("Seu novo salário será: %f\n", s2);}
	if (s>2500){
		printf("Seu nome é: %s %s\n", nome, sobrenome);
		printf("Não há aumento no salário\n");
		printf("Seu salário atual é: %f\n", s);
		printf("Seu novo salário será: %f\n", s);}
	getch();
	return 0;
}
