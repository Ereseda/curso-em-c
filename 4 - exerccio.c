#include <stdio.h>


/*  4 - ENUNCIADO:
	Fa�a um programa em C que seja capaz  de calcular e apresentar a dist�ncia
	total percorrida por um ve�culo que rodou por x minutos a uma velocdade 
	m�dia igual a v KM/h. X e V devem ser informados pelo usu�rio(considere-os
	 como inteiro).
*/

int main(void){
	
	int x, v,d;
	
	printf(" Digite os minutos percorrido: ");
	scanf("%d", &x);
	printf(" Digite a velocidade percorrida:" );
	scanf("%d",&v);
	
	d = x * v;
	
	printf(" A dist�ncia percorrida pelo ve�culo eh de: %d", d);
	
	
	return 0;
}