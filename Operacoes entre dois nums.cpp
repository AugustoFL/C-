// Construa um programa que leia 2 n�meros inteiros e exibir a adi��o, subtra��o, multiplica��o, divis�o entre os dois n�meros.

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
