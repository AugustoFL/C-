
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;



int main() {
system("color F9");
setlocale (LC_ALL,"PORTUGUESE");
	int v,w,x,y,z,erros,acertos;
	
	//Colocando o valor de acertos e erros para 0 para ir somando  conforme acerta e erra
	acertos=0;
	erros=0;
	//Quiz 
	cout << "Primeira Pergunta: \n Quem foi Isaac Newton? \n 1)Um cientista \n 2)Um artista \n 3)Um atleta \n ";
    cin >> v;
	if (v==1){
		cout << "Voce acertou!" << endl;
		acertos=acertos+1;
	}
	else {
		cout << "Voce errou! :C" << endl;
		erros=erros+1;
	}


	cout << "Segunda Pergunta: \n Qual dessas nao foi uma contribuicao de Isaac Newton? \n 1)Teorema Binomial \n 2)A Lei da Gravitacao Universal \n 3)Teoria da Relatividade \n";
    cin >> w;
	if (w==3) {
		cout << "Voce acertou!";
		acertos=acertos+1;
	}
	else {
		cout << "Voce errou! :C" << endl;
		erros=erros+1;
	}
	
	
	
	cout << "\nTerceira Pergunta: \n Onde nasceu Isaac Newton? \n 1)Alemanha \n 2)Croacia \n 3)Inglaterra \n";
	cin >> x;
	if (x==3) {
		cout << "Voce Acertou!" << endl;
		acertos=acertos+1;
	}
	else {
		cout << "Voce Errou! :C" << endl;
		erros=erros+1;
	}
	
	
	
	cout << "\nQuarta Pergunta: \n Qual a principal obra de Isaac Newton? \n 1)Optica \n 2)Principios Matematicos da Filosofia Natural \n 3)Metodo de Fluxoes \n";
	cin >> y;
	if (y==2) {
		cout << "Voce Acertou!" << endl;
		acertos=acertos+1;
	}
	else {
		cout << "Voce Errou! :C" << endl;
		erros=erros+1;
	}
	
	
	
	cout << "\nQuinta e ultima pergunta: \n Qual e a primeira lei de Newton? \n 1)Principio da Inercia \n 2)Principio Fundamental da Dinamica \n 3)Acao e reacao \n";
	cin >> z;
	if (z==1){
		cout << "Voce Acertou!" << endl;
		acertos=acertos+1;
	}
	else {
		cout << "Voce Errou! :C" <<endl;
		erros=erros+1;
	}
	
		cout << "Voce acertou:" << acertos << endl;
		cout << "Voce errou:" << erros << endl;
		
		if (acertos==5) {
			cout << "Menção: MB";
		}
		else if (acertos>=3 && acertos<5){
			cout << "Menção: B";
		}
		else if (acertos==2){
			cout << "Menção: R";
		}
		else if (acertos<2){
			cout << "Menção: I";
		}
}		 
