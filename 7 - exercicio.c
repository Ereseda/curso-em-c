#include <stdio.h>
#include <locale.h>

/*  7 - ENUNCIADO:
	LEIA UM VALOR EM REAL E A COTA��O DO DOLAR EM SEGUIDA IMPRIMA O VALOR
	CORRESPONDENTE EM DOLARES.
	Exerc�cio realizado no dia 17/02/2023 �s 16:00 by Eli Santos
	
*/

int main (void){
	
	//Declara��o dos valores
	float real, cotacao;
	setlocale(LC_ALL,"Portuguese");
	printf("\n");
	//Entrada dos valores
	printf(" Digite o valor em real: R$ ");
	scanf("%f", &real);
	//Calculo dos valores
	cotacao = real / 5.17;
	//sa�da dos valores	
	printf(" Valor em Dolar � de: $ %.2f\n", cotacao);	
	return 0;
}