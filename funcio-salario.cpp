//Faça um algoritmo que receba o salário-base de um funcionário,
// calcule e mostre o salário a receber, sabendo-se que esse funcionário
// tem gratificação de 5% sobre o salário base e paga imposto de 7% sobre o salário base.

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
