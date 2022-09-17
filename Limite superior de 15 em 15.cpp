#include <stdio.h> 
#include <conio.h> 
#include <locale.h>

main () {
	int n1,cont;
	
	printf ("Digite um numero inteiro para definir como limite\n");
	scanf  ("%d", &n1);
	cont=15;
	while (cont<=n1) {		
	
	    printf ("\n%d", cont);
	    cont=cont+15;
	    
	}
}
