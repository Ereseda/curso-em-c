#include <stdio.h>

/*  5 - ENUNCIADO:
	Fa�a um programa em C que, dado um n�mero inteiro informado
	pelo usu�rio, diga se ele � divis�vel por 4, por 5  ou por ambos os n�meros

*/
int main(void){
	
	int num;
	
	printf(" Digite um valor :");
	scanf("%d", &num);
	
	if(num % 4 == 0 || num % 5 ==0){
		printf(" O numero digitado � divisivel por 4 ou por 5 ");
	}else{
		printf(" o numero nao eh divisivel por amboas");
	}
	return 0;
}