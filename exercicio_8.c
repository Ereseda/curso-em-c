#include<stdio.h>
#include<locale.h>
//Atividade do dia 03/03/2023 �s 9:58
int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("\n");
	printf("****************************************************************\n");
	printf("**     8 - FA�A UM PROGRAMA QUE LEIA UM N�MERO POSITIVO       **\n");
	printf("**     E MOSTRE NA TELA OS N PRIMEIROS N�MEROS PARES QUE      **\n");
	printf("**     S�O AO MESMO TEMPO DIVIS�VEIS POR 4 E POR 7.           **\n");
	printf("****************************************************************\n");
	printf("\n");
	int numero;
	printf(" Digite um n�mero qualquer: ");
	scanf("%d",&numero);
	if(numero %4 ==0 && numero %7 ==0){
		   	printf(" O n�mero digitado � divisivel por 4 e por 7: %d\n", numero);	   
		
	}
	 else {
			printf(" O n�mero digitado nao � divisivel por 4 e por 7.\n");	
		}
	return 0;
}
