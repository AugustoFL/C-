//Fa�a um algoritmo que receba tr�s notas, calcule e mostre a m�dia aritm�tica entre elas.

#include <stdio.h>
#include <math.h>

main () 
{
	float n1,n2,n3;
	
	printf ("digite a primeira nota\n");
	scanf  ("%f", &n1);
	printf ("Digite a segunda nota\n");
	scanf  ("%f", &n2);
	printf ("Digite a terceira nota\n");
	scanf  ("%f", &n3);
	printf ("A media aritmetica das notas e: %.2f" , (n1+n2+n3)/2);
}
