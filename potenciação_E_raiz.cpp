#include <stdio.h>
#include <math.h>
main () {
	int num,quadrado,cubo,raizqua,raizcubo;
	printf ("digite um numero positivo ");
	scanf ("%i", &num);
	quadrado=pow(num,2);
	printf ("\n o numero digitado ao quadrado e:%i ",quadrado);
	cubo=pow(num,3);
	printf ("\n o numero digitado ao cubo e: %i",cubo);
	raizqua=sqrt(num);
	printf ("\n a raiz quadrada do numero digitado e:%i ", raizqua);
	raizcubo=pow(num,1/3);
	printf ("\n a raiz cubica do numero digitado e:%i ", raizcubo);
	
	
}