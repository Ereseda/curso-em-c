#include <stdio.h>


/*  4 - ENUNCIADO:
	Faça um programa em C que seja capaz  de calcular e apresentar a distância
	total percorrida por um veículo que rodou por x minutos a uma velocdade 
	média igual a v KM/h. X e V devem ser informados pelo usuário(considere-os
	 como inteiro).
*/

int main(void){
	
	int x, v,d;
	
	printf(" Digite os minutos percorrido: ");
	scanf("%d", &x);
	printf(" Digite a velocidade percorrida:" );
	scanf("%d",&v);
	
	d = x * v;
	
	printf(" A distância percorrida pelo veículo eh de: %d", d);
	
	
	return 0;
}