#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


// Atividade executada no dia  01/03/2023 ás 23:41


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	printf("\n");
	printf("*********************************************************************\n");
	printf("*                     EXERCÍCIO DA LISTA-3                          *\n");	
    printf("*                                                                   *\n");
    printf("* 1 - ESCREVA UM PROGRAMA QUE LÊ 12 VALORES REAIS, ENCONTRA O MAIOR *\n");
	printf("*     VALOR E O MENOR DELES E MOSTRA  O RESULTADO.                  *\n");
	printf("*                                                                   *\n");
	printf("*********************************************************************\n");
	

	int contador = 1;
	float maior, menor, valor;

	while(contador <= 12){
		printf("\n");
		printf(" Digite um valor em real: %d \n ", contador);
		scanf("%f", &valor);
		
		if(contador ==1){
			maior = valor;
			menor = valor;
		}
		if(valor > maior){
			maior =valor;
		}else if(valor < menor){
			menor = valor;
		}
		contador++;
	}
	printf("\n");
	printf(" O maior valor é : %.2f\n", maior);
	printf(" O menor valor é: %.2f\n", menor);
	return 0;
	
}