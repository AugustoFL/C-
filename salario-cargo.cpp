//Operadores Lógicos
// e -> &&
// ou -> ||
// negação -> !

// 1- Leia o cargo e o salário de um profissional. Calcule e exiba o novo salário conforme opções abaixo:

//Caso cargo = técnico à acréscimo de 1,5%

//Caso cargo = gerente à acréscimo de 1,3%

//Para qualquer outro cargo à acréscimo de 1,1%
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

cout << "digite o seu salário: ";
cin >> salario;
fflush (stdin);
cout << "digite o seu cargo ([T]Técnico|[G]Gerente|[O]Outro): ";
cin >> cargo;
fflush (stdin);

if (cargo=='T') {
	acresimo=salario*0.015;
	salariof=salario+acresimo;
	printf ("o seu novo salário é:%.2f ", salariof);
}
if (cargo=='G') {
	acresimo=salario*0.013;
	salariof=salario+acresimo;
	printf ("o seu novo salário é:%.2f ", salariof);
}
if (cargo=='O') {
	acresimo=salario*0.011;
	salariof=salario+acresimo;
	printf ("o seu novo salário é:%.2f ", salariof);
}
}
