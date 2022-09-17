#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main (){
	setlocale (LC_ALL,"PORTUGUESE");
system ("color f9");

float a,b,c,d;
cout << "digite um numero para A: ";
cin >> a;
cout << "digite um numero para B: ";
cin >> b;
cout << "digite um numero para C: ";
cin >> c;
cout << "digite um numero para D: ";
cin >> d;
	if (a>b && a>c && a>d) 
	{
		cout << "\n A e o maior numero ";
	
	}
	else if (b>a && b>c && b>d)
	{
		cout << "\n B e o maior numero ";
	}
	else if (c>a && c>b && c>d)
	{
		cout << "\n C e o maior numero ";	
	}
	else if (d>a && d>b && d>c)
	{
		cout << "\n D e o maior numero ";	
	}
	if (a<b && a<c && a<d) 
	{
		cout << "\n A e o menor numero ";
	
	}
		else if (b<a && b<c && b<d)
	{
		cout << "\n B e o menor numero ";
	}
	else if (c<a && c<b && c<d)
	{
		cout << "\n C e o menor numero ";	
	}
	else if (d<a && d<b && d<c)
	{
		cout << "\n D e o menor numero ";	
	}
}