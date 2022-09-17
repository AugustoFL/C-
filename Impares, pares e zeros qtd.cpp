#include <stdio.h>

main () {
	//Leia 5 números e exiba quantos são pares ou impares.
	int cont=1, num, resto,qtdimp=0,qtdpar=0,qtdzero=0;
	
	while(cont<=5) {
		printf ("Digite um numero:\n");
		scanf  ("%d",&num);
		if (num==0) {
			qtdzero++;
		}
		else {
			resto=num%2;
			if (resto==0) {
				qtdpar++;
			}
			else { 
			qtdimp++;
			}
		}
		cont++;
	}
	printf ("A quantidade de zero e: %d", qtdzero);
	printf ("\nA quantidade de pares e: %d", qtdpar);
	printf ("\nA quantidade de impares e: %d", qtdimp);
}
