#include <stdio.h>

/*  5 - ENUNCIADO:
	Faça um programa em C que, dado um número inteiro informado
	pelo usuário, diga se ele é divisível por 4, por 5  ou por ambos os números

*/
int main(void){
	
	int num;
	
	printf(" Digite um valor :");
	scanf("%d", &num);
	
	if(num % 4 == 0 || num % 5 ==0){
		printf(" O numero digitado é divisivel por 4 ou por 5 ");
	}else{
		printf(" o numero nao eh divisivel por amboas");
	}
	return 0;
}