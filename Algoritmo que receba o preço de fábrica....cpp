#include <stdio.h>
#include <math.h>
main () {
	float l,f,i;
	
	
printf ("Vamos calcular o valor correspondende ao lucro do distribuidor,\n o valor correspondende aos impostos e\n o preco final do veiculo\n");
printf ("Digite o preco de fabrica do carro: ");
scanf  ("%f", &f);
printf ("Digite o porcentual do lucro (Em numero decimal)\n ");
scanf  ("%f",&l);
printf ("Digite o porcentual dos impostos (Em numero decimal)\n");
scanf  ("%f", &i );
printf ("O valor do luro do distribuidor e igual a:%.2f\n", f*l/100);
printf ("O valor dos impostos e igual a:%.2f\n", f*i/100);
printf ("O valor do preco final e igual a:%.2f\n", (f*l/100)+(f*i/100)+f);
}
