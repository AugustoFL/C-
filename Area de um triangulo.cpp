//Leia a base e a altura de um triângulo e calcule sua área.

#include <stdio.h>
#include <math.h>

main ()
{

float x,z;

printf ("Digite a altura do triangulo\n");
scanf  ("%f", &x);
printf ("Digite a base do triangulo\n");
scanf ("%f", &z);
printf ("A area do triangulo e:%2.f ", x*z/2 );
}
