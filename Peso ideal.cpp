//1) Segunda uma tabela m�dica, o peso ideal est� relacionado a altura e o sexo. Fa�a um programa que receba 
// a altura e o sexo de uma pessoa, calcule e exiba seu peso ideal, utilizando as seguintes formulas:
//Homens:    (72.7*altura-58)
//Mulheres: (62.1*altura-44.7)

#include <stdio.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;
int main() {
	 setlocale (LC_ALL,"PORTUGUESE");
system("color F9");

float peso,altura;
char sexo;

	cout << "Qual � a sua altura?\n";
	  cin >> altura; 
	  fflush (stdin);
	cout << "Qual seu sexo?\n";
	  cin >> sexo;
	  fflush (stdin);
		if ((sexo=='m')||(sexo=='M')){
 peso=72.7*altura-58;
	printf ("Seu peso ideal �: %.2f gramas", peso);
		} 
		else // ifs encadeados ou anilhados 
		if ((sexo=='f')||(sexo=='F')){
peso=62.1*altura-44.7;
			
	printf ("Seu peso ideal �: %.2f gramas", peso);
			}
		}

