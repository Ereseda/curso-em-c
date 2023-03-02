#include <stdio.h>
#include <locale.h>

/*  8 - ENUNCIADO:
	LEIA UM NÚMERO INTEIRO E IMPRIMA A SOMA DO ANTECESSOR DO SEU TRIPLO COM O
	 SUCESSOR DO SEU SOBRO.
	 Exercício realizado no dia 17/02/2023 ás 16:18 by Eli Santos

*/
int main(void){
	
	int numero, soma,antecessor,sucessor,  triplo;
	setlocale(LC_ALL,"Portuguese");
	printf("\n");
	printf(" Digite um número inteiro qualquer: ");
	scanf("%d", &numero);
	
	soma = numero-1;
	triplo = soma*3;
	sucessor = triplo + 1;
	
	printf(" o antecessor do número digitado é: %d\n", soma);
	printf(" O triplo do resultado da soma é: %d\n" , triplo);
	printf(" O sucessor do dobro do triplo é de : %d", sucessor);
	return 0;
}