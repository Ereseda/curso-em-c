#include <stdio.h>
#include <locale.h>

/*  7 - ENUNCIADO:
	LEIA UM VALOR EM REAL E A COTAÇÃO DO DOLAR EM SEGUIDA IMPRIMA O VALOR
	CORRESPONDENTE EM DOLARES.
	Exercício realizado no dia 17/02/2023 ás 16:00 by Eli Santos
	
*/

int main (void){
	
	//Declaração dos valores
	float real, cotacao;
	setlocale(LC_ALL,"Portuguese");
	printf("\n");
	//Entrada dos valores
	printf(" Digite o valor em real: R$ ");
	scanf("%f", &real);
	//Calculo dos valores
	cotacao = real / 5.17;
	//saída dos valores	
	printf(" Valor em Dolar é de: $ %.2f\n", cotacao);	
	return 0;
}