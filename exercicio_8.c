#include<stdio.h>
#include<locale.h>
//Atividade do dia 03/03/2023 ás 9:58
int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("\n");
	printf("****************************************************************\n");
	printf("**     8 - FAÇA UM PROGRAMA QUE LEIA UM NÚMERO POSITIVO       **\n");
	printf("**     E MOSTRE NA TELA OS N PRIMEIROS NÚMEROS PARES QUE      **\n");
	printf("**     SÃO AO MESMO TEMPO DIVISÍVEIS POR 4 E POR 7.           **\n");
	printf("****************************************************************\n");
	printf("\n");
	int numero;
	printf(" Digite um número qualquer: ");
	scanf("%d",&numero);
	if(numero %4 ==0 && numero %7 ==0){
		   	printf(" O número digitado é divisivel por 4 e por 7: %d\n", numero);	   
		
	}
	 else {
			printf(" O número digitado nao é divisivel por 4 e por 7.\n");	
		}
	return 0;
}
