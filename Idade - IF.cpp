//  	Exercício
//1)Faça um programa que receba a idade de uma pessoa, e exiba
// UMA DAS mensagens abaixo:
// - você é maior de idade
// - você é menor de idade
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
		printf ("você é menor de idade");
	}
	else
	{
		printf ("Você é meaior de idade");
	}
}
