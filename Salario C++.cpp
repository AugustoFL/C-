//Faça um algoritmo que receba o número de horas trabalhadas e o valor do salário mínimo. Calcule e mostre o salário a receber seguindo as regras abaixo:
//a) A hora trabalhada vale a metade do salário mínimo;
//b) O salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada.
//c) O imposto equivale a 3% do salário bruto.
//d) O salário a receber equivale ao salário bruto menos o imposto.
#include <stdio.h>
#include <math.h>
main(){
	float h,salmin,vh,salbrut,imp;
	printf ("DIGITE QUANTAS HORAS FORAM TRABALHADAS: ");
	scanf ("%f", &h);
	printf ("\nDIGITE O VALOR DO SALARIO MINIMO: ");
	scanf ("%f", &salmin);
	vh=salmin/2;
	printf ("\no valor da hora trabalhada e:%.2f ", vh);
	salbrut=h*vh;
	printf ("\no valor do salario bruto e:%.2f ", salbrut);
	imp=0.3*salbrut;
	printf ("\no valor do imposto e:%.2f ", imp);
	printf ("\no salario a receber e:%.2f ", salbrut-imp); 	
	
}
