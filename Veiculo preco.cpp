//O custo ao consumidor de um carro novo � a soma do pre�o de f�brica com o percentual de lucro do distribuidor 
//e dos impostos aplicados ao pre�o de f�brica. Fa�a um algoritmo que receba o pre�o de f�brica de um ve�culo, 
//o percentual de lucro do distribuidor e o percentual de impostos. Calcule e mostre:
//a) O valor correspondente ao lucro do distribuidor
//b) O valor correspondente aos impostos.
//c) O pre�o final do ve�culo.

#include <stdio.h>
#include <math.h>

main ()
{
	float lucro,impo,fabri,final;
	
	printf ("Digite o preco de fabrica do veiculo\n");
	scanf  ("%f", &fabri);
    printf ("Digite a taxa do lucro do distribuidor (em numeros decimais)\n");
    scanf  ("%f", &lucro);
    printf ("Digite a taxa de impostos (em numeros decimais)\n");
    scanf ("%f", &impo);
    printf ("O valor do lucro e de: %f\n", fabri*lucro);
    printf ("O valor dos impostos e de: %f\n", fabri*impo);
    printf ("O valor final do veiculo e de: %.5f\n", fabri+(fabri*lucro)-(fabri*impo));
	
}
