// 7- Construa um programa para determinar se o indivíduo esta com um peso favorável. 
//Essa situação é determinada através do IMC (Índice de Massa Corpórea), que é definida
 //como sendo a relação entre o peso (PESO) e o quadrado da Altura (ALTURA) do indivíduo.
 // Ou seja, e, a situação do peso é determinada pela tabela abaixo:
//Condição Situação
//IMC abaixo de 20 Abaixo do peso
//IMC de 20 até 25 Peso Normal
//IMC de 25 até 30 Sobre peso
//IMC de 30 até 35 Obeso
//IMC de 35 até 40 Obeso Mórbido
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;
int main() {
	 setlocale (LC_ALL,"PORTUGUESE");
system("color F9");

float peso,ideal,altura,altura2;
char sexo;

	cout << "Qual é a sua altura?\n";
	  cin >> altura; 
	  fflush (stdin);
	cout << "Qual seu peso?\n";
	  cin >> peso;
	  fflush (stdin);
	altura2=pow(altura,2);
	ideal=peso/altura2;
	if (ideal<20) {
		cout << "Você está abaixo do peso";
	}
	else if (ideal>20 && ideal<25) {
		cout << "Você está com peso normal";
	}
	else if (ideal>=25 && ideal<30) {
		cout << "Você está acima do peso";
	}
	else if (ideal>=30 && ideal<35) {
		cout << "Você está obeso";
	}
	else if (ideal>=35 && ideal<=40) {
		cout << "Você está obeso morbido";
	}
}