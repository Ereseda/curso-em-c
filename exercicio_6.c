#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// Atividade executada dia: 02/03/2023 �s 11:52

int main(){
	
    setlocale(LC_ALL, "Portuguese");
	printf("\n");
	printf("*************************************************************************************\n");
	printf("*                           EXERC�CIO DA LISTA-3                                    *\n");	
    printf("*                                                                                   *\n");
    printf("*     6 - FA�A UM PROGRAMA QUE LEIA 12 N�MEROS INTEIROS POSITIVOS E, AO FINAL,      *\n");
	printf("*     	  FA�A A EXIBI��O DO RESULTADO DA SOMA DOS N�MEROS IMPARES E DOS  N�MEROS   *\n");
	printf("*         PARES.                                                                    *\n");
	printf("*                                                                                   *\n");                                                                           
	printf("*************************************************************************************\n");
	
	int numeros, soma_par = 0, soma_impar = 0;	
	do{
		printf(" Digite um n�mero inteiro: \n");
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
	printf(" A soma dos n�meros pares �: %d\n", soma_par );
	printf(" A soma dos n�meros impares �: %d\n", soma_impar);
	return 0;
}