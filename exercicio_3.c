#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Atividade executada dia 02/03/2023  �s 09:59

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	printf("\n");
	printf("*********************************************************************\n");
	printf("*                     EXERC�CIO DA LISTA-3                          *\n");	
    printf("*                                                                   *\n");
    printf("*  3 - FA�A UM PROGRAMA QUE CALCULA A SOMA DOS N�MEROS DIGITADOS    *\n");
	printf("*      PELO USU�RIO. O PROGRAMA DEVE PERMITIR QUE O USU�RIO DIGITE  *\n");
	printf("*      UMA QUANTIDADE N�O DETERMINADA DE N�MEROS, ENCERRANDO-SE     *\n");
	printf("*      QUANDO O USU�RIOS DIGITAR O VALOR ZERO(0).                   *\n");                                                                           
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