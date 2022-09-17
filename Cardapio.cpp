//Desenvolver um programa que exiba um menu para o usuario:
// Cardapio - Lanches
// 1- X-Salada 	(R$12,50)
// 2- X-Mignon 	(R$18,50)
// 3- Bauru 	(R$10,00)
// Opção - Bebidas
// 1- Coca-cola (R$10,00)
// 2- Guaraná	(R$08,00)
// 3- Suco		(R$09,00) 
// 4- Água		(R$06,00)
// Calcule e exiba a conta do cliente
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main (){
	setlocale (LC_ALL,"PORTUGUESE");
system ("color f9");

float opcao1,opcao2,lanchef,bebidaf;
char lanche,bebida;

	// Definindo o menu
	cout << "Olá, seja Bem-Vindo ao menu da Loja!\n Segue abaixo o cardápio:\n";
	cout << "Lanches: \n \n 1- X-Salada (R$12,00) \n \n 2- X-Mignon (R$18,50) \n \n 3- Bauru (R$10,00)\n";
	cout << "Qual lanche irá querer?\n";
	cin  >> lanche;
	cout << "Quantos lanches desse irá querer?\n";
	cin  >> opcao1;
	cout << "Bebidas: \n \n  1- [Coca]-cola (R$10,00) \n \n 2- [Gua]raná (R$08,00) \n \n 3- [Suco] (R$09,00) \n \n 4- [Água] (R$06,00)";
	cout << "Qual bebida irá querer?\n";
	cin  >> bebida;
	cout << "Quantas bebidas dessa irá querer?\n";
	cin  >> opcao2;
	
	//Definindo o valor final do lanche
	if (lanche='1'){
		lanchef=opcao1*12.00;
	}
	else if (lanche='2'){
		lanchef=opcao1*18.50;
	}
	else if (lanche='3'){
		lanchef=opcao1*10.00;
	}
	
	//Defenindo o valor final da bebida
	if (bebida='1'){
		bebidaf=opcao2*10.00;
	}
	else if (bebida='2'){
		bebidaf=opcao2*8.00;
	}
	else if (bebida='3'){
		bebidaf=opcao2*09.00;
	}
	else if (bebida='4'){
		bebidaf=opcao2*06.00;
	}
	
	//Conta final
	cout << "O valor final da conta é:" << lanchef+bebidaf << endl;	
}
