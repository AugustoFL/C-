//2) Faça um programa que receba
//  um número, e:
// se for menor que 10, exiba seu quadrado
//  se for maior ou igual, exiba sua raiz quadrada
#include <stdio.h>
#include <locale.h>
#include <math.h>
main () 
{ 
    setlocale (LC_ALL,"PORTUGUESE");
    float x,y;
    
    printf ("Digite um número\n");
    scanf ("%f", &x);
    if (x<10)
    y=pow(x,2);
    printf ("O quadrado do número é:%2.f",y);
    
    else 
    {
    	y=sqrt(x);
    	printf ("A raiz quadrada do número é:%2.f", y);
	}
}
