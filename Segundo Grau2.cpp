//Desenvola um programa que calcule as raízes reais de uma equação do segundo grau:
// ax²+bx+c=0

#include <stdio.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;
int main() {
	 setlocale (LC_ALL,"PORTUGUESE");
system("color F9");

float a,b,c,d,x,x1,x2,b2;

	printf ("Digite o valor de a\n");
	scanf  ("%f", &a);
	 fflush (stdin);
	printf ("Digite o valor de b\n");
	scanf  ("%f", &b);
	 fflush (stdin);
	printf ("Digite o valor de c\n");
	scanf  ("%f", &c);
	 fflush (stdin);
b2=pow(b,2);
 printf ("b ao quadrado é: %2.f\n",b2);
d=(b*b)-(4*a*c);
	if (d<0) {
	printf ("O valor de delta é: %.2f\n", d);
	printf ("como delta é menor que 0, então não há raiz real\n");
 }
  if (d==0)
  {
  	x=-b/2*a;
  	printf ("O valor de delta é: %.2f\n", d);
  	printf ("Como delta é igual a 0, há apenas uma raiz, que é:%.2f \n",x);
  }
 	if (d>0) {
 	printf ("O valor de delta é: %.2f\n", d);
 		x1=(-b+d)/2*a;
 		x2=(-b-d)/2*a;
 		printf ("O valor de x1 é: %.2f\n", x1);
 		printf ("O valor de x2 é: %.2f\n", d);
	 }
	}

