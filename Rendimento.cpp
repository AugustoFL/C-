//-Faça um algoritmo que receba o valor de um depósito e o valor da taxa de juros, 
//calcule e mostre o valor do rendimento e o valor total depois do rendimento.

#include <stdio.h>
#include <math.h>

main () 
{
	float dep, juro, rend;
	
	printf ("Digite o valor do deposito\n");
	scanf  ("%f", &dep);
	printf ("\nDigite a taxa de juros (em numeros decimais)");
	scanf  ("%f", &juro);
	rend=juro*dep;
	printf ("O valor total foi de: %f", dep+rend);
}  
