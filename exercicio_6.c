#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// Atividade executada dia: 02/03/2023 ás 11:52

int main(){
	
    setlocale(LC_ALL, "Portuguese");
	printf("\n");
	printf("*************************************************************************************\n");
	printf("*                           EXERCÍCIO DA LISTA-3                                    *\n");	
    printf("*                                                                                   *\n");
    printf("*     6 - FAÇA UM PROGRAMA QUE LEIA 12 NÚMEROS INTEIROS POSITIVOS E, AO FINAL,      *\n");
	printf("*     	  FAÇA A EXIBIÇÃO DO RESULTADO DA SOMA DOS NÚMEROS IMPARES E DOS  NÚMEROS   *\n");
	printf("*         PARES.                                                                    *\n");
	printf("*                                                                                   *\n");                                                                           
	printf("*************************************************************************************\n");
	
	int numeros, soma_par = 0, soma_impar = 0;	
	do{
		printf(" Digite um número inteiro: \n");
		scanf("%d", &numeros);
		if(numeros < 0){
			break;
		}
		if(numeros %2 == 0){
			soma_par += numeros;
		}else{
			soma_impar += numeros;
		}
	}while(numeros <= 128
	);
	printf(" A soma dos números pares é: %d\n", soma_par );
	printf(" A soma dos números impares é: %d\n", soma_impar);
	return 0;
}