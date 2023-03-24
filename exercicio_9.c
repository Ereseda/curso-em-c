#include<stdio.h>
#include<locale.h>
//Atividade do dia 03/03/2023 ás 10:28
int main(){
	
	setlocale(LC_ALL,"Portuguese");
	printf("\n");
	printf("****************************************************************\n");
	printf("**     9 - JOSEVALDO TEM 1,35 M E CRESCE 2 CM POR ANO, EN-    **\n");
	printf("**     QUANTO RAFONILDO TEM 1,07 M E CRESCE 3 CM POR ANO.     **\n");
	printf("**     CONSTRUA UM PROGRAMA QUE CALCULE E IMPRIMA QUANTOS     **\n");
	printf("**     ANOS SERÃO NECESSÁRIOS PARA QUE RAFONILDO SEJA MAIOR   **\n");
	printf("**     QUE JOSEVALDO.                                         **\n");
	printf("****************************************************************\n");
	printf("\n");
	
	float Josevaldo = 1.35, Rafonildo = 1.07;
	int ano = 0;
	
	while(Josevaldo >= Rafonildo){
		Josevaldo += 0.02;
		Rafonildo += 0.03;
		ano ++;
	}
	printf(" São necessários %d anos!\n para Rafonildo ficar maior que o Josevaldo.\n",ano);
	return 0;
}
