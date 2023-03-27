#include<stdio.h>
#include<stdlib.h>

int main(){
    //https://www.youtube.com/watch?v=cGaXZEOjtec&t=525s
    //Declaração de variáveis
    int m[3][3];
    int contaPares = 0;
    int contaImpares = 0;

    //Entrada de dados
    for(int i =0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o valor da matriz [%d][%d] : ", i, j);
            scanf("%d",&m[i][j]);
            if(m[i][j] % 2 ==0){
                contaPares += 1;
            }else{
                contaImpares += 1;
            }
        }
        printf("\n");
    }
    //Mostrar a matriz
    printf("\n\nMatriz Gerada: ");
    for(int x = 0; x < 3; x++){
            printf("\n");
        for(int y = 0; y < 3; y++){
            printf("%d", m[x][y]);

        }
    }
    printf("\n");
    //Mostrar os elementos pares
    printf("\nQuantidade de números pares: %d", contaPares);
    printf("\n");
    printf("\nQuantidade de números pares: %d", contaImpares);
    printf("\n");
    return 0;
}
