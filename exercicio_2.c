#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

//Atividade executada dia 09/03/2023 ás 10:08
//Atividade da Lista 4
/*
	2 - TENTANDO DESCOBRIR SE UM DADO ERA VICIADO, UM DONO DE CASSINO,
	HONESTO O LANÇOU N VEZES. DADOS OS N RESULTADOS DOS LANÇAMENTOS
	DETERMINAR O NÚMERO DE OCORRÊNCIA DE CADA FACE.
*/


 
int main()
{
	//DECLARAÇÃO DAS VARIÁVEIS
	setlocale(LC_ALL,"Portuguese");
	int n, i, vetor[6], lado;
	//ENTRADA DE VALORES
	printf(" Digite o numero de vezes que o dado foi lançado:");
	scanf("%d", &n);
	
	for(i = 1; i <=6; i++){
		vetor[i]= 0;
	}
	for(i = 1; i <= n; i++){
		printf(" Digite a face do dado:");
		scanf("%d", &lado);
		vetor[lado]++;
	}
	for(i = 1; i<= n; i++){
		if(vetor[i]  != 0){
			printf(" A face %d caiu %d vezes. \n", i, vetor[i]);
		}
	}
	return 0;
}