#include <stdio.h>
#include <math.h>
main () {
	float h,s,hex,hexv,hv,sb,hexr;
	printf ("digite as horas trabalhadas: \n");
	scanf ("%f",&h);
	printf ("digite o valor do salario minimo: \n");
	scanf ("%f",&s);
	printf ("digite as horas extras trabalhadas:\n");
	scanf ("%f",&hex);
	hv=0.125*s;
	printf ("o valor das horas trabalhadas e:%.2f\n", hv);
	hexv=0.25*s;
	printf ("o valor das horas extras e:%.2f\n", hexv);
	sb=h*hv;
	printf ("o valor do salario bruto e:%.2f\n", sb);
	hexr=hex*hexv;
	printf("a quantia a receber pelas horas extras e:%.2f\n", hexr);
	printf ("o salario a receber e:%.2f\n", sb+hexr);
	
}
