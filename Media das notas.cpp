#include <stdio.h>

//2- Escreva um programa que calcule e exiba a média de 10 notas digitadas pelo usuário.
//Considerar notas válidas, somente valores de 0 (zero) a 10 (dez).
//Se o usuário digitar algum valor inválido, deverá ser exibida uma mensagem informando o ocorrido.

main () {
	float n1, qtdn, media=0;
	int cont=0;
	
	printf ("Vamos calcular a media de algumas notas.");
	printf ("\n AVISO: Somente valores entre 0 (Zero) e 10 (Dez) serao aceitos.");
	printf ("\n Digite qunatas notas serao lidos:");
	scanf   ("%f", &qtdn);
	
	while (cont<qtdn){
		printf ("Digite uma nota:");
		scanf   ("%f", &n1);
		if ((n1<0)||(n1>=11)){
			printf ("Numero invalido, considerado como 0\n");
			}
		else {
		media=media+n1;
			}
		cont++;
		}
	

	printf ("A media das notas e: %.2f", media/qtdn);
}
