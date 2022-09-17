#include <stdio.h>
#include <math.h>

main () {
	
   float a,b,c,delta,x1,x2;
	
	
	printf ("Digite o valor de A\n");
	scanf  ("%f", &a);
	printf ("Digite o valor de B\n");
	scanf  ("%f", &b);
	printf ("Digite o valor de C\n");
	scanf  ("%f", &c);
	delta=(b*b)-4*a*c;
	printf ("O valor de delta e:%2.f\n", delta);
	x1=-(b+delta)/2*a;
	x2=(-b-delta)/2*a;
	printf ("O valor de x1 e:%2.f\n", x1);
	printf ("O valor de x2 e:%2.f\n", x2);
}