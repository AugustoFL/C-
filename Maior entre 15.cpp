#include <stdio.h>

//1- Escreve um programa que leia 15 n�meros inteiros e exiba na 
//tela ao final, o maior n�mero que foi digitado pelo usu�rio.
main () {
	
	int cont=0,maior=0,n1,qtdn;
	
	printf ("Vamos ver uma quantidade de numeros inteiros e o maior entre eles.");
	printf ("\n Digite quantos numeros serao lidos:");
	scanf  ("%d", &qtdn);
	while (cont<qtdn){
		printf ("Digite um numero:\n");
		scanf  ("%d", &n1);
		cont++;
		if (maior<n1){
			maior=n1;
		}
		
	}
		printf ("O maior numero entre esses e: %d", maior);

}

