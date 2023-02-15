#include <stdio.h>

   /*  1 - ENUNCIADO:
		Faça um programa em C que seja capaz de calcular o salário de um progra-
		mador. Considere como entrada o valor pago por hora trabalhada, o número
		de horas por semana e o percentual de desconto a ser retido para INSS. 
		Apresente o salário liquido mensal do programador considerando que em 
		média, tem-se 4,5 semanas a cada mês.
	*/
int main(void){
	
	
	
	/*Declaração das variáveis*/
	
	float hora, semana, percentual,multiplicacao, mes, percentualresultado, 
	resultadofinal, diferenca;
	 
	 /*Entrada de valores da hora trabalhada*/
	 printf("----------------------------------------------------------------------------\n\n");
	 printf(" Digite o valor das horas: ");
	 scanf("%f", &hora);
	 
	 /*Entrada do número de horas por semana*/
	 printf(" Digite o numero de horas por semana: ");
	 scanf("%f",&semana);
	 
	 /*Calculo das horas com numero de horas por semana*/
	 
	 multiplicacao = hora * semana;
	 
	 /*mostrar o valor do calculo*/
	/* printf(" O valor das horas trabalhada por semana eh de: %.2f\n", multiplicacao);	*/
	 
	 /*Considerando que o mês tem 4,5 semanas*/
	 
	 mes = multiplicacao * 4.5;
	 
	/* printf(" O valor recebido pelo programador sem desconto eh de: %.2f\n", mes);*/
	 
     printf(" Digite a porcentagem de desconto do INSS:");
	 scanf("%f", &percentual);
	 
	 /*Salário com desconto de porcentagem do INSS*/
	 
	 percentualresultado = (mes * percentual)/100;	 
     resultadofinal = mes - percentualresultado;
     diferenca = mes - resultadofinal;
     
     printf("\n");
	 printf(" RESULTADO:\n\n");
	 printf(" O valor do salario do programador sem desconto eh de: %.2f\n", mes);
	 printf(" O valor do salario do programador com desconto eh de: %.2f\n",  resultadofinal);
	 printf(" Diferenca de : %.2f",diferenca);
	 printf("\n");
	 printf("----------------------------------------------------------------------------\n\n");	
	return 0;
}