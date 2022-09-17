//6- Faça um algoritmo que receba dois números maiores que zero, calcule e mostre um elevado ao outro.
#include <stdio.h>
#include <math.h>
main (){
int x,y,poten;
printf ("digite um numero maior que zero: ");
scanf ("%d",&x);
printf ("digite outro numero maior que zero: ");
scanf ("%d",&y);
poten=pow(x,y);
printf ("o resultado da potenciaçao e: %d", poten);
}


