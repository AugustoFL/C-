//2- Entrar com a sigla do estado de uma pessoa e imprimir uma das mensagens: “Carioca, Paulista, Mineiro ou Outros”
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main (){
	setlocale (LC_ALL,"PORTUGUESE");
system ("color f9");
char sigla;

	cout << "Digite uma sigla ([R]J|[S]P|[M]G)\n" << endl;
	 scanf ("%c", &sigla);
	if ((sigla=='R')||(sigla=='r')){
	cout << "A sigla é do estado de Rio de Janeiro/Carioca" << endl;  
		}
	else if ((sigla=='S')||(sigla=='s')) {
	cout << "A sigla é do estado de São Paulo";
}
	else if ((sigla=='M')||(sigla=='m'))	{
	cout << "A sigla é do estado de Minas Gerais" << endl; 
	}
	if ((sigla!='r')&&(sigla!='R')&&(sigla!='m')&&(sigla!='M')&&(sigla!='s')&&(sigla!='S')) {
		cout << "A sigla é de outro estado";
	}
}
