#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Atividade executada dia 02/03/2023  ás 09:59

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	printf("\n");
	printf("*********************************************************************\n");
	printf("*                     EXERCÍCIO DA LISTA-3                          *\n");	
    printf("*                                                                   *\n");
    printf("*  3 - FAÇA UM PROGRAMA QUE CALCULA A SOMA DOS NÚMEROS DIGITADOS    *\n");
	printf("*      PELO USUÁRIO. O PROGRAMA DEVE PERMITIR QUE O USUÁRIO DIGITE  *\n");
	printf("*      UMA QUANTIDADE NÃO DETERMINADA DE NÚMEROS, ENCERRANDO-SE     *\n");
	printf("*      QUANDO O USUÁRIOS DIGITAR O VALOR ZERO(0).                   *\n");                                                                           
	printf("*********************************************************************\n");
	
	int numero, auxiliar = 1, produto = 0;
	printf("\n");
	printf(" Informe os numeros:\n ");
	
	while(auxiliar != 0){
		scanf("%d", &numero);
		
		if(numero != 0)
			produto  =  produto + numero;
			auxiliar = numero;
	}
	printf("\n %d ", produto);
     return 0;
}