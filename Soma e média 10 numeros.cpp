//Fa�a um programa na linguagem C, que calcule e exiba a soma e a m�dia de 10 n�meros reais

#include <stdio.h>
#include <locale.h>
main () 
{
	setlocale (LC_ALL,"PORTUGUESE");
	
	float n1=0,n2,cont=0;
	
	printf ("Vamos calcular a soma e a m�dia de 10 n�meros reais\n");
	while (cont<10){
	cont++;
	printf ("digite um numero\n");
	scanf  ("%f", &n2);
	n1=n1+n2;
	}
	printf ("A media aritmetica das notas �: %.2f\n" , n1/10);
	printf ("A soma dos n�meros �: %.2f\n", n1);
}
