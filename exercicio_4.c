#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// Atividade executada dia: 02/03/2023

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	printf("\n");
	printf("*************************************************************************************\n");
	printf("*                           EXERCÍCIO DA LISTA-3                                    *\n");	
    printf("*                                                                                   *\n");
    printf("*      	4- ESCREVA UM PROGRAMA QUE MOSTRA OS NÚMEROS QUE POSSUEM RESTO IGUAL A 5    *\n");
	printf("*      QUANDO DIVIDIDOS POR 12. CONSIDERE O INTERVALO ENTRE 1000 E 1999,INCLUINDO   *\n");
	printf("*      ESSES EXTREMOS.                                                              *\n");
	printf("*                                                                                   *\n");                                                                           
	printf("*************************************************************************************\n");
	
	int i = 1000;
	int resto;
	while(i<=1999){
		resto = i%12;
		if(resto == 5){
			printf("%d\n",i);
		}
		i = i+1;
	}
	
	return 0;
}