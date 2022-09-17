#include <stdio.h>
#include <locale.h>
main () 
{
	setlocale (LC_ALL,"PORTUGUESE");
	
	int cont=0, maior=0;
	int idade, media=0;
		
	
	printf ("Vamos calcular a soma e a média das idades de 15 pessoas\n assim como a quantidade de maiores de idades entre essas");
	while (cont<16){
	printf ("\nQual a idade dessa pessoa?\n");
	scanf  ("%d", &idade);
	media=idade+media;
	if (idade>17){
		maior++;
		}
		cont++;
	}
	printf ("A soma das idades é: %d \n", media);
	printf ("A média das idades é: %d\n", media/15);
	printf ("Entre essas pessoas %d são maiores de idade", maior);
}
