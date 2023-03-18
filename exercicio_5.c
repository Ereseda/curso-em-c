#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// Atividade executada dia: 02/03/2023  ás 11:25

int main(){	
	
	setlocale(LC_ALL, "Portuguese");
	printf("\n");
	printf("*************************************************************************************\n");
	printf("*                           EXERCÍCIO DA LISTA-3                                    *\n");	
    printf("*                                                                                   *\n");
    printf("*      5 - FAÇA UM PROGRAMA PARA GERAR OS 'N' PRIMEIROS TERMOS DA SEQUÊNCIA         *\n");
	printf("*     	1 1 2 3 5 8 13 21 34 55 89...(fibonacci)                                    *\n");
	printf("*                                                                                   *\n");
	printf("*                                                                                   *\n");                                                                           
	printf("*************************************************************************************\n");
	
	int i, n, t1=0, t2 = 1, proximo;
	
	printf("Informe a quantidade de termos:\n");
	scanf("%i", &n);
	//Sequência
	printf("\nSÉRIE DE FIBONACCI\n");
	for(i = 1; i <= n; i++){
		printf("%i ", t1 );
		proximo = t1 + t2;
		t1 = t2;
		t2 = proximo;
	}
	return 0;
}