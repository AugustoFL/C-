//Operadores L�gicos
// e -> &&
// ou -> ||
// nega��o -> !

// 1- Leia o cargo e o sal�rio de um profissional. Calcule e exiba o novo sal�rio conforme op��es abaixo:

//Caso cargo = t�cnico � acr�scimo de 1,5%

//Caso cargo = gerente � acr�scimo de 1,3%

//Para qualquer outro cargo � acr�scimo de 1,1%
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main (){
	setlocale (LC_ALL,"PORTUGUESE");
system ("color f9");

float salario, acresimo,salariof;
char cargo;

cout << "digite o seu sal�rio: ";
cin >> salario;
fflush (stdin);
cout << "digite o seu cargo ([T]T�cnico|[G]Gerente|[O]Outro): ";
cin >> cargo;
fflush (stdin);

if (cargo=='T') {
	acresimo=salario*0.015;
	salariof=salario+acresimo;
	printf ("o seu novo sal�rio �:%.2f ", salariof);
}
if (cargo=='G') {
	acresimo=salario*0.013;
	salariof=salario+acresimo;
	printf ("o seu novo sal�rio �:%.2f ", salariof);
}
if (cargo=='O') {
	acresimo=salario*0.011;
	salariof=salario+acresimo;
	printf ("o seu novo sal�rio �:%.2f ", salariof);
}
}
