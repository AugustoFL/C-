#include <stdio.h>
#include <locale.h>
main () 
{
	setlocale (LC_ALL,"PORTUGUESE");
	
	int func, sexo, cont=0,hom=0,mul=0;
	float sal, media=0;
		
	
	printf ("Vamos calcular a media salarial dos funcionarios da sua empresa, \n a quantidade de homens e de mulheres também");
	printf ("\nQuantos funcionarios trabalham na sua empresa?\n");
	scanf  ("%d", &func);
	while (cont<func){
	printf ("Qual o salarios desse funcionario?\n");
	scanf  ("%f", &sal);
	media=sal+media;
	printf ("Este funcionario é [1]homem ou [2]mulher?\n");
	scanf  ("%d", &sexo);
	if (sexo==1){
		hom++;
		}
	else if (sexo==2) {
		mul++;
		}
	else if ((sexo!=1)&&(sexo!=2)){
		printf ("Resposta invalida, programa irá continuar considerando como 'nenhum dos dois' a resposta\n");
	}
		cont++;
	}
	sexo=hom+mul;
	printf ("A média salarial é: %2.f reais\n", media/func);
	printf ("Na empresa trabalham %d homens e %d mulheres\n",hom,mul);
}
