#include <stdio.h> 
#include <conio.h> 
#include <locale.h>

main () {
	int n1,cont
	;
	
	
	printf ("Vamos calcular a tabuada de um número inteiro\n Digite um numero:\n");
	scanf  ("%d", &n1);
	cont=1;
	while (cont<=10) {
		printf ("%d X %d = %d\n", n1,cont,n1*cont);
		cont++;
	}
	
	
}
