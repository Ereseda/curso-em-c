#include<stdio.h>
#include<locale.h>
//Atividade do dia 03/03/2023 �s 
int main(void){
	
	setlocale(LC_ALL,"Portuguese");
	printf("\n");
	printf("****************************************************************\n");
	printf("**     10 - CRIE UM PROGRAMA QUE SEJA CAPAZ DE REALIZAR O     **\n");
	printf("**     C�LCULO DE EXPONENCIA��O PARA QUALQUER BASE E EXPO-    **\n");
	printf("**     ENTES FORNECIDOS PELO USU�RIO. O C�LCULO DEVE SER      **\n");
	printf("**     REALIZADO SEM A UTILIZA��O DE FUN��O PRONTA DO C.      **\n");
	printf("****************************************************************\n");
	printf("\n");
	
	int n, m, resultado = 1, i;
	
	printf(" Digite dois n�meros com espa�o: \n ");
	scanf(" %d %d", &n, &m);
	
	for( i = 0; i < m; i++){
		resultado = resultado*n;		
	}
	printf(" O resultado �: %d \n", resultado);
	return 0;
}
