//O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do distribuidor 
//e dos impostos aplicados ao preço de fábrica. Faça um algoritmo que receba o preço de fábrica de um veículo, 
//o percentual de lucro do distribuidor e o percentual de impostos. Calcule e mostre:
//a) O valor correspondente ao lucro do distribuidor
//b) O valor correspondente aos impostos.
//c) O preço final do veículo.

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
