//  	Exerc�cio
//1)Fa�a um programa que receba a idade de uma pessoa, e exiba
// UMA DAS mensagens abaixo:
// - voc� � maior de idade
// - voc� � menor de idade
#include <stdio.h>
#include <locale.h>
#include <math.h>
main () 
{ 
  	int idade;

    setlocale (LC_ALL,"PORTUGUESE");
	printf ("Digite sua idade: \n");
	scanf  ("%i", &idade);
	if (idade<=17)
	{
		printf ("voc� � menor de idade");
	}
	else
	{
		printf ("Voc� � meaior de idade");
	}
}
