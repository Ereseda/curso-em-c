#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// Atividade executada dia: 02/03/2023 �s 

int main(){
	
    setlocale(LC_ALL, "Portuguese");
	printf("\n");
	printf("******************************************************************************************\n");
	printf("*                           EXERC�CIO DA LISTA-3                                         *\n");	
    printf("*                                                                                        *\n");
    printf("*    7 - O PROFESSOR DA DISCIPLINA LPF(LINGUAGEM DE PROGRAMA��O F�CIL) PRECISA           *\n");
	printf("*     	CALCULAR AS M�DIAS ARITM�TICAS ALCAN�ADAS POR SEUS ALUNOS PARA O SEMESTRE        *\n");
	printf("*       CORRENTE. PARA ISSO, FA�A UM PROGRAMA QUE RECEBA OS VALORES DAS 5 AVALIA��ES     *\n");
	printf("*       REALIZADAS E EXIBA A M�DIA.	                                                 *\n");                                                                           
	printf("******************************************************************************************\n");
	
	float nota1, nota2, nota3, nota4,nota5, media;
	
	printf("\n");
	printf(" Digite as cinco notas do aluno: \n ");
	scanf(" %f%f%f%f%f",&nota1, &nota2, &nota3, &nota4,&nota5);
	media = (nota1 + nota2 + nota3 + nota4 + nota5)/5;
	printf(" A m�dia do aluno �: %.2f", media);
	printf("\n");
	return 0;
}