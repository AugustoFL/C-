// Construa um programa que leia 2 números inteiros e exibir a adição, subtração, multiplicação, divisão entre os dois números.

#include <stdio.h>
#include <math.h>

main ()
{
	int x,y;
	
	printf ("Digite o primeiro numero\n");
	scanf  ("%d", &x);
	printf ("Digite o segundo numero\n");
	scanf  ("%d", &y);
	printf ("A adicao entre esses numeros e: %d", x+y);
    printf ("\nA subtracao entre esses numeros e: %d", x-y);
    printf ("\nA multiplicacao entre esses numeros e: %d", x*y);
    printf ("\nA divisao entre esses numeros e: %d", x/y);
}
