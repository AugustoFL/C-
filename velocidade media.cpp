// Obtenha uma dist�ncia percorrida por um carro em km e a quantidade de tempo gasta em horas e calcule a velocidade m�dia.    F�rmula: km/h
#include <stdio.h>
#include <math.h>
main() {
	float km,h;
	printf ("\n digite quantos km serao percorridos: ");
	scanf ("%f", &km);
	printf ("\n digite quantas horas foram gastas para percorrer: ");
	scanf ("%f", &h);
	printf ("a velocidade media e: %2.f", km/h);
}
