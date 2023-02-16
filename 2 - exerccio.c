#include <stdio.h>


/*  2 - ENUNCIADO:
	Faça um programa em C que receba 5 números ponto flutuante e 1 peso associa-
	do a cada um dos números previamente informados. O programa deverá apresent-
	ar como saída a média aritmética dos respectivos números e pesos.

*/

int main(void){
	
    /*Declaração das variáveis*/
    float n1,n2,n3,n4,n5, p1,p2,p3,p4,p5,medianumero,mediapeso;
    
    /*Entrada dos 5 valores*/
    printf(" Digite o primeiro valor   : ");
    scanf("%f",&n1);
    printf(" Digite o primeiro peso    : ");
    scanf("%f", &p1);
    
    printf(" Digite o segundo valor    : ");
    scanf("%f",&n2);
    printf(" Digite o segundo  peso    : ");
    scanf("%f", &p2);
    
    printf(" Digite o terceiro valor   : ");
    scanf("%f",&n3);
    printf(" Digite o terceiro peso    : ");
    scanf("%f", &p3);
    
    printf(" Digite o quarto valor     : ");
    scanf("%f",&n4);
    printf(" Digite o quarto peso      : ");
    scanf("%f", &p4);
    
    printf(" Digite o quinto valor     : ");
    scanf("%f",&n5);
    printf(" Digite o qunto peso       : ");
    scanf("%f", &p5);
    
    /*Calculo da média dos 5 valores*/
    medianumero = ((n1*p1) +(n2 * p2 ) +(n3 * p3)  +( n4 * p4) + (n5 *p5))/5;
    
   
    printf("\n");
    /*Resultado da média*/
    printf(" A media dos 5 valores digitados  eh de: %.2f", medianumero);
    
    printf("\n");
	return 0;
	
}