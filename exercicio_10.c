#include<stdio.h>
#include<locale.h>
//Atividade do dia 03/03/2023 ás 
int main(void){
	
	setlocale(LC_ALL,"Portuguese");
	printf("\n");
	printf("****************************************************************\n");
	printf("**     10 - CRIE UM PROGRAMA QUE SEJA CAPAZ DE REALIZAR O     **\n");
	printf("**     CÁLCULO DE EXPONENCIAÇÃO PARA QUALQUER BASE E EXPO-    **\n");
	printf("**     ENTES FORNECIDOS PELO USUÁRIO. O CÁLCULO DEVE SER      **\n");
	printf("**     REALIZADO SEM A UTILIZAÇÃO DE FUNÇÃO PRONTA DO C.      **\n");
	printf("****************************************************************\n");
	printf("\n");
	
	int n, m, resultado = 1, i;
	
	printf(" Digite dois números com espaço: \n ");
	scanf(" %d %d", &n, &m);
	
	for( i = 0; i < m; i++){
		resultado = resultado*n;		
	}
	printf(" O resultado é: %d \n", resultado);
	return 0;
}
