// 4- A prefeitura de Ourinhos abriu uma linha de crédito para os funcionários estatutários.
// O valor máximo da prestação não poderá ultrapassar 30% do salário bruto.
// Fazer um algoritmo que permita entrar com o salário bruto e o valor da prestação, e informar se o empréstimo pode ou não ser concedido.
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>
using namespace std;

int main (){
	setlocale (LC_ALL,"PORTUGUESE");
system ("color 0");

//var
	float salario,prestacao;

//codigo 
	cout << "Digite o seu salario bruto\n";
	 cin >> salario;
	cout << "Digite o valor da sua prestacao\n";
	 cin >> prestacao;
	if (prestacao>salario*0.30){
		cout << "O emprestimo nao pode ser concedido";
	}
	   else {
	   	cout << "O emprestimo pode ser conecido";
	   }	
}