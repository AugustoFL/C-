//1) Segundo uma Tabela M�dica, o peso ideal est� relacionado coma a altura e o sexo. Fazer um programa que receba a altura e o sexo de uma pessoa, calcular e exibir seu peso ideal, utilizando as seguintes f�rmulas:
//Homens: (72.7*altura)-58
//Mulheres: (62.1*altura)-44.7
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>
using namespace std;



int main() {
system("color F9");

float peso,altura,result;
char sexo;
	
	cout << "Digite sua Altura:";
	cin >> altura;
	cout << "\n Digite o seu Sexo (m) para masculino / (f) para feminino:";
	cin >> sexo; 
	if (sexo=='m'){
		printf ("\n O seu peso ideal e:%.2f ", (72.7*altura)-58); 
	}
	else {
		result=(62.1*altura)-44.7;
		printf ("\n O seu peso ideal e: %.2f",result);
	}
}
