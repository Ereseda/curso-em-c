#include <stdio.h>
#include <math.h>

/*  3 - ENUNCIADO:
	Faça um programa em C que ao ler um número inteiro identifique se ele é ne-
	gativo, zero ou positivo.
	Se negativo, apresente o número ao quadrado, se positivo apresente a raiz 
	quadrado dele e, caso seja zero, apresente uma mensagem ao usuário dizendo
	que o número digitado é zero.
*/
int main(void){
	
	int numero, resultado;
	printf("\n");
	printf(" Digite um numero inteiro:");
	scanf("%d",&numero);
	
	if(numero < 0){
		resultado = pow(numero,2);
		printf(" Negativo %d", resultado);
	}if(numero > 0 ){
		resultado = sqrt(numero);
		printf(" positivo %d", resultado);
	}else if(numero == 0)
		printf(" O numero digitado e igual a zero");
		printf("\n");
	return 0;
}