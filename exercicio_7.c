#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// Atividade executada dia: 02/03/2023 ás 

int main(){
	
    setlocale(LC_ALL, "Portuguese");
	printf("\n");
	printf("******************************************************************************************\n");
	printf("*                           EXERCÍCIO DA LISTA-3                                         *\n");	
    printf("*                                                                                        *\n");
    printf("*    7 - O PROFESSOR DA DISCIPLINA LPF(LINGUAGEM DE PROGRAMAÇÃO FÁCIL) PRECISA           *\n");
	printf("*     	CALCULAR AS MÉDIAS ARITMÉTICAS ALCANÇADAS POR SEUS ALUNOS PARA O SEMESTRE        *\n");
	printf("*       CORRENTE. PARA ISSO, FAÇA UM PROGRAMA QUE RECEBA OS VALORES DAS 5 AVALIAÇÕES     *\n");
	printf("*       REALIZADAS E EXIBA A MÉDIA.	                                                 *\n");                                                                           
	printf("******************************************************************************************\n");
	
	float nota1, nota2, nota3, nota4,nota5, media;
	
	printf("\n");
	printf(" Digite as cinco notas do aluno: \n ");
	scanf(" %f%f%f%f%f",&nota1, &nota2, &nota3, &nota4,&nota5);
	media = (nota1 + nota2 + nota3 + nota4 + nota5)/5;
	printf(" A média do aluno é: %.2f", media);
	printf("\n");
	return 0;
}