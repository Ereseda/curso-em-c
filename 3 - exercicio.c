#include <stdio.h>
#include <math.h>

/*  3 - ENUNCIADO:
	Fa�a um programa em C que ao ler um n�mero inteiro identifique se ele � ne-
	gativo, zero ou positivo.
	Se negativo, apresente o n�mero ao quadrado, se positivo apresente a raiz 
	quadrado dele e, caso seja zero, apresente uma mensagem ao usu�rio dizendo
	que o n�mero digitado � zero.
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