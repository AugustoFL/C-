#include <stdio.h>

//3- Escreva um programa que leia vários números inteiros e ao final informe quantos números pares,
//quantos números impares, quantos números positivos e quantos números negativos foram digitados
//pelo usuário. O programa só deve parar de rodas quando o usuário responder "S" na seguinte
//pergunta, "Deseja encenrrar o programa?".

main (){
	
	int n1, qtdp=0, qtdi=0, qtdn=0, qtdpp=0, cont=0, resto, p, pp=0;

//	n1=numero |qtdp= quantidade de pares | qtdi= quantidade de impares
//  qtdn= quantidade de negativos        | qtdpp= quantidade de positivos
// 	pp= encerra ou não o programa	     | resto= define se é par ou impar
//  p= aumenta ou nao o valor 
	
// --------------------------Inicio do programa------------------------------ //	
	
	printf ("Vamos calcular quantos numeros pares, impares\n");
	printf ("negativos e positivos estao entre uma quantida de numeros\n");
	printf ("AVISO: Somente numeros INTEIROS serao lidos\n");
	
// --------------------------Definindo o loop------------------------------ //
	
	while (pp<1){

// --------------------------Lendo os numeros------------------------------ //
	
	printf ("\nDigite um numero:");
	scanf  ("%d", &n1);
	fflush(stdin);
// ------------------------Definindo se sao impares etc.------------------ //		
	
	resto=n1%2;
	
	if (resto==0){
		qtdp++;
	}
	else {
		qtdi++;
	}
	
// ----------------------Definindo se sao negativos etc.------------------ //
	
	if (n1<0){
		qtdn++;
	}
	else if (n1>0){
		qtdpp++;
				  }
// Aumnentando o contador	
	cont++;
// ----------------------Exibindo os resultados-------------------------- //	

	printf ("\n\nA quantidade de pares atualmente e: %d\n", qtdp);
	printf ("A quantidade de impares atualmente e: %d\n", qtdi);
	printf ("A quantidade de negativos atualmente e: %d\n", qtdn);
	printf ("A quantidade de positivos atualmente e: %d\n", qtdpp);
	
// -------Pergunta final, encerrar ou não? e encerrando o programa-------- //	
	
	printf ("\nDeseja encerrar o programa?");
	printf ("\n [1]Sim      [2]Nao\n\n");
	scanf  ("%d", &p);
	fflush(stdin);
		if (p==1){
			printf ("Desligando o programa...\n");
			 pp=11;
			}

			}
		}
	
