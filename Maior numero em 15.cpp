//15 - Escreva um programa que leia 15 n�meros inteiros e exiba na tela ao final, o maior n�mero que foi digitado pelo usu�rio.(obrigat�rio o uso de algum la�o de repeti��o).
#include <stdio.h> 
#include <iostream>
using namespace std;

main () {
	int n1,cont=0,maior=0;
	
	printf ("Vamos ler 15 numeros e ver o mair deles\n");
	while (cont<16){
	printf ("Digite um numero\n");
	scanf  ("%d", &n1);
	if (n1>maior){
	maior=n1;	
	 }
	 cont++;
	}
	printf ("O maior numero e: %d", maior);	
}
