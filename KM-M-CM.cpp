#include <stdio.h>
#include <math.h>
main () {
	
	float km;
	
	
		printf ("Digite a quantidade de km \n");
		scanf  ("%f", &km);
		printf ("\nEssa quantidade de km em metros e:%2.f \n", km*1000);
		printf ("\nE em centimetros e: %2.f \n", km*100000);
}