#include <stdio.h>
#include <math.h>

/*  6 - ENUNCIADO:
	Fa�a um programa capaz de determinar e a presentar
	as raizes de uma equa��o de 2� grau. O usu�rio
	dever� fornecer os valores referentes � A, B e C
	(Coeficientes num�ricos).
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