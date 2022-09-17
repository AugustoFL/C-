#include <stdio.h> 
#include <conio.h> 
#include <locale.h>

main () {
	int n1,n2,cont;
	
	printf ("Digite um numero inteiro para definir como limite\n");
	scanf  ("%d", &n1);
	printf ("Digite um numero para o incremento\n");
	scanf  ("%d", &n2);
	cont=0;
	while (cont<=n1) {
	    printf ("\n%d", cont);
		cont=cont+n2;
	    
	}
}
