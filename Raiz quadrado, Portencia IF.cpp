//2) Fa�a um programa que receba
//  um n�mero, e:
// se for menor que 10, exiba seu quadrado
//  se for maior ou igual, exiba sua raiz quadrada
#include <stdio.h>
#include <locale.h>
#include <math.h>
main () 
{ 
    setlocale (LC_ALL,"PORTUGUESE");
    float x,y;
    
    printf ("Digite um n�mero\n");
    scanf ("%f", &x);
    if (x<10)
    y=pow(x,2);
    printf ("O quadrado do n�mero �:%2.f",y);
    
    else 
    {
    	y=sqrt(x);
    	printf ("A raiz quadrada do n�mero �:%2.f", y);
	}
}
