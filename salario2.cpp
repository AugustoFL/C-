#include <stdio.h>
#include <math.h>
main () {
	float h,s,vh,sb,im,horaex, horaex2;

	
	printf ("Digite quantas horas foram trabalhadas:\n");
	scanf ("%f",&h);
	printf ("digite o salario minimo:\n");
	scanf ("%f",&s);
	printf ("Digite a quantidade de horas extras\n");
	scanf ("%f", &horaex);
	vh=s*0.125;
	sb=h*vh;
	horaex2=s/4;
	printf ("o valor da hora e:%2.f\n", vh);
  	printf ("o valor do salario bruto e:%2.f\n ", sb);
  	printf ("o valor das horas extras e:%2.f\n ", horaex*horaex2);
	printf ("o salario a receber e:%.2f",sb+(horaex*horaex2));


	
}
