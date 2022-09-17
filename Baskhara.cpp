//2)Desenvolva um programa que calcule as raízes reais de uma equação do 2° grau:
//		ax²+bx+c=0
// 		Fórmula de Bhaskara
// OBS: se DELTA = Negativo, não existe raízes reais, se DELTA = 0, x1=x2.
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>
using namespace std;



int main() {
system("color F9");
float a,b,b2,c,delta,raizdelta,x1,x2,x;

	cout << "\n digite o valor de a:";
	cin >> a;
	cout << "\n digite o valor de b:";
	cin >> b;
	cout << "\n digite o valor de c:";
	cin >> c;
	b2=pow(b,2);
	delta=b2-(4*a*c);
	printf ("\n o valor de delta e:%f", delta);
	
	if (delta>0){
		raizdelta=sqrt(delta);
		x1=-b+raizdelta/(2*a);
		x2=-b-raizdelta/(2*a);
		printf ("\n o valor de x1 e:%f", x1);
		printf ("\n o valor de x2 e:%f", x2);
	}
	else if (delta==0){
	    x=-b/(2*a);	
	    printf ("\n como o DELTA e 0, entao x1 e x2 sao iguais:%f", x);
	}
	else if (delta<0){
		printf ("\n como o DELTA e menor que zero, nao existe raiz real:");
	}
}
