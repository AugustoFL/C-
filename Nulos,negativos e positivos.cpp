#include <stdio.h>

main () {
	//Leia 10 números e exiba na tela quantos são positivos, negativos ou nulos.
	int cont=1, num, resto,qtdpos=0,qtdneg=0,qtdzero=0;
	float porceneg,porcenpos,porcenzero;
	
	//criando condição para se repetir o código 
	while(cont<=10) {
		//pedindo o numero
		printf ("Digite um numero:\n");
		scanf  ("%d",&num);
		//Fazendo com que se o numero fosse zero, aumentasse a quantidade de zero
		if (num==0) {
			qtdzero++;
		}
		//Mesma coisa com positivos
		else if(num>0) {
				qtdpos++;
			}
			//Mesma coisa com negativos
			else { 
			qtdneg++;
			}
		//Aumentando a contagem
		cont++;
	}
	
	//Fazendo o calculo da porcentagem
	porceneg=float(qtdneg/(cont-1)*100);
	porcenpos=qtdpos*10;
	porcenzero=qtdzero*10;
	
	//Exibindo tudo
	printf ("A quantidade de zero e: %d", qtdzero);
	printf ("\nA quantidade de pares e: %d", qtdpos);
	printf ("\nA quantidade de impares e: %d", qtdneg);
	printf ("\nA porcentagem de zeros e: %f", porcenzero);
	printf ("\nA porcentagem de positivos e: %f", porcenpos);
	printf ("\nA porcentagem de negativos e: %f", porceneg);
}
