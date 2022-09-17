//3- Um hotel cobra R$ 300,00 por diária e mais uma taxa adicional de serviços. Se a diária for menor que 15 a taxa e de R$ 20,00.
//Se o númerode diárias for igual a 15 a taxa é de R$ 14,00 e se o número for maior que 15 a taxa é de R$ 12,00.
//Considerando-se que para cada pessoa tenha-se um registro contendo seu nome e o número de diárias.
//Faça um programa que exiba o nome e o total a pagar do hóspede.
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
	 cout << "Quantas diárias você estará reservando?\n";
	 cout << "Diárias menor que 15 dão uma taxa de R$20,00\n";
	 cout << "Diárias iguais que 15 dão uma taxa de R$14,00\n";
	 cout << "Diárias maior que 15 dão uma taxa de R$12,00\n";
	  cin >> diaria;
	  valor=300;	 
	if (diaria<15) {
	 cout << "A taxa de R$20,00 será aplicada\n";
	 taxa=20.00;
	 printf ("O senhor(a) %c", nome);
	 printf (" reservou %.2f", diaria);
	 printf (" diárias e pagará um total de %2.f ", valor+taxa);
	 printf (" reais");
	}
	  else if (diaria==15) {
	 cout << "A taxa de R$14,00 será aplicada\n";
	 taxa=14.00;
	 printf ("O senhor(a) %c", nome);
	 printf (" reservou %.2f", diaria);
	 printf (" diárias e pagará um total de %2.f ", valor+taxa);
	 printf (" reais"); }
	 if (diaria>15) {
	 cout << "A taxa de R$12,00 será aplicada\n";
	 taxa=12.00;
	 printf ("O senhor(a) %c", nome);
	 printf (" reservou %.2f", diaria);
	 printf (" diárias e pagará um total de %2.f ", valor+taxa);
	 printf (" reais"); }
}
