//Fa�a um algoritmo que receba o sal�rio-base de um funcion�rio,
// calcule e mostre o sal�rio a receber, sabendo-se que esse funcion�rio
// tem gratifica��o de 5% sobre o sal�rio base e paga imposto de 7% sobre o sal�rio base.

#include <stdio.h>
#include <math.h>

main ()
{
	float salbase, grat, impo;
	
	printf ("Digite o salario base do funcionario\n");
	scanf  ("%f", &salbase);
	grat=salbase*0.05;
	impo=salbase*0.07;
	printf ("\nO salario que o funcionaria ira receber e de: %.3f", salbase+grat-impo);
	
}
