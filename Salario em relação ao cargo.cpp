//1- Leia o cargo e o sal�rio de um profissional. Calcule e exiba o novo sal�rio conforme op��es abaixo:
//Caso cargo = t�cnico � acr�scimo de 1,5%
//Caso cargo = gerente � acr�scimo de 1,3%
//Para qualquer outro cargo � acr�scimo de 1,1%
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;
int main() {
	 setlocale (LC_ALL,"PORTUGUESE");
system("color F9");

float salario,acresimo,salariofinal;
char cargo;
	
	cout << "Digite seu salario\n";
	 cin >> salario;
	   fflush (stdin);
	cout << "Digite seu cargo ([T]ecnico|[G]erente|[O]utro)\n";
	 cin >> cargo;
	   fflush (stdin);
	if ((cargo=='T')||(cargo=='t')) {
	acresimo=salario*0.015;
	salariofinal=salario+acresimo;
	 printf ("Seu sal�rio com acr�scimo �:%.2f\n", salariofinal);
	}
	else if ((cargo=='G')||(cargo=='g')) {
	acresimo=salario*0.013;
	salariofinal=salario+acresimo;
	 printf ("Seu sal�rio com acr�scimo �:%.2f\n", salariofinal);
	}
	else if ((cargo=='O')||(cargo=='o')) {
	acresimo=salario*0.011;
	salariofinal=salario+acresimo;
	 printf ("Seu sal�rio com acr�scimo �:%.2f\n", salariofinal);
	}
}
