#include <stdio.h>
#include <math.h>
main () {
	float h,s,vh,sb,im;

	
	printf ("Digite quantas horas foram trabalhadas:\n");
	scanf ("%f",&h);
	printf ("digite o salario minimo:\n");
	scanf ("%f",&s);
	vh=s/2;
	sb=h*vh;
	im=0.03*sb;
	printf ("o valor da hora e:%f\n", vh);
  	printf ("o valor do salario bruto e:%f\n ", sb);
  	printf ("o valor do imposto e:%f\n ",im);
	printf ("o salario a receber e:%.2f",sb-im);


	
}
