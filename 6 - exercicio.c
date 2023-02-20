#include <stdio.h>
#include <math.h>

/*  6 - ENUNCIADO:
	Faça um programa capaz de determinar e a presentar
	as raizes de uma equação de 2² grau. O usuário
	deverá fornecer os valores referentes á A, B e C
	(Coeficientes numéricos).
*/

int main (void){
	
	int A, B, C;
	float X1, X2,Delta;
	
	printf(" Digite o valor de A: ");
	scanf("%d",&A);
	
	printf(" Digite o valor de B: ");
	scanf("%d",&B);
	
	printf(" Digite o valor de C: ");
	scanf("%d",&C);
	
	Delta = B*B - 4 * A * C;
	if(A != 0){
			X1 = (- B + sqrt(Delta))/(2 * A);
            X2 = (- B - sqrt(Delta))/(2 * A);
	}
	

    
    printf(" As raizes da equacao sao: %d ,%d", X1, X2);
	return 0;
}