//3- Um hotel cobra R$ 300,00 por di�ria e mais uma taxa adicional de servi�os. Se a di�ria for menor que 15 a taxa e de R$ 20,00.
//Se o n�merode di�rias for igual a 15 a taxa � de R$ 14,00 e se o n�mero for maior que 15 a taxa � de R$ 12,00.
//Considerando-se que para cada pessoa tenha-se um registro contendo seu nome e o n�mero de di�rias.
//Fa�a um programa que exiba o nome e o total a pagar do h�spede.
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main (){
	setlocale (LC_ALL,"PORTUGUESE");
system ("color f9");

float taxa,diaria,valor;
char nome;

	 cout << "Seja Bem Vindo ao Hotel de Carpazinha\n Qual o seu nome?\n";
	  cin >> nome; 
	 cout << "Quantas di�rias voc� estar� reservando?\n";
	 cout << "Di�rias menor que 15 d�o uma taxa de R$20,00\n";
	 cout << "Di�rias iguais que 15 d�o uma taxa de R$14,00\n";
	 cout << "Di�rias maior que 15 d�o uma taxa de R$12,00\n";
	  cin >> diaria;
	  valor=300;	 
	if (diaria<15) {
	 cout << "A taxa de R$20,00 ser� aplicada\n";
	 taxa=20.00;
	 printf ("O senhor(a) %c", nome);
	 printf (" reservou %.2f", diaria);
	 printf (" di�rias e pagar� um total de %2.f ", valor+taxa);
	 printf (" reais");
	}
	  else if (diaria==15) {
	 cout << "A taxa de R$14,00 ser� aplicada\n";
	 taxa=14.00;
	 printf ("O senhor(a) %c", nome);
	 printf (" reservou %.2f", diaria);
	 printf (" di�rias e pagar� um total de %2.f ", valor+taxa);
	 printf (" reais"); }
	 if (diaria>15) {
	 cout << "A taxa de R$12,00 ser� aplicada\n";
	 taxa=12.00;
	 printf ("O senhor(a) %c", nome);
	 printf (" reservou %.2f", diaria);
	 printf (" di�rias e pagar� um total de %2.f ", valor+taxa);
	 printf (" reais"); }
}
