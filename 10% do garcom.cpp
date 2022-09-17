// Leia uma despesa gasta em uma mesa de restaurante e calcule os 10% do garçom.

#include <stdio.h>
#include <math.h>

main ()
{
	float des;
	
	printf ("Digite o valor da despesa\n");
	scanf  ("%f", &des);
	printf ("O garcom recebera:%2.f ", des*0.10);
}
