#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int opcao, opcao1, opcao2, opcao3, opcao4, i, quant;
    struct referencia{
        char nome0[100], nome1[100], nome2[100], nome3[100], nome4[100];
    }
    CA[600];
    CA[600];
    CA[600];
    CA[600];
    CA[600];
    CA[600];

    char nome5[100];

    system("cls");
    printf("Nome do Atendente: ");
    fflush(stdin);
    scanf("%[^\n]s", nome5);
    printf("Senha da Loja C&A: ");
    scanf("%d", &opcao3);

    switch(opcao3){
    case 123456:
        while(opcao!=6){
            while(opcao2!=1){
                system("color F5");
                system("cls");


                printf("                             Loja C&A                                   \n\n");
                printf(" Seja Bem Vindo, Atendente %s\n", nome5);
                printf("_______________________________________________________________________\n");
                printf(" 1 - Cadastrar\n ");
                printf("2 - Exibir Dados\n");
                printf(" 3 - Alterar\n");
                printf(" 4 - Excluir\n");
                printf(" 5 - Informações do Sistema\n");
                printf(" 6 - Sair\n");
                printf("\n");
                printf("\nQual opção Você deseja Acessar? ");
                scanf("%d", &opcao);

                switch(opcao){
                case 1:
                    system("cls");
                    printf("\n\n Quantos Cadastros Você Deseja Realizar?");
                    scanf("%d", &quant);

                    for(i =1; i <=quant; i ++){
                        system("cls");
                        printf(" Iniciando Cadastro: %d\n\n",i);
                        printf(" Nome do Comprador: ");
                        fflush(stdin);
                        scanf("%[^\n]s", CA [i].nome0);
                        printf("\n Telefone do Comprador: ");
                        fflush(stdin);
                        scanf("%d[^\n]s", CA[i].nome1);
                        printf("\n Marca do Produto: ");
                        fflush(stdin);
                        scanf("%d[^\n]s", CA[i].nome2);
                        printf("\n Código do Produto: ");
                        fflush(stdin);
                        scanf("%d[^\n]s", CA[i].nome3);
                        printf("\n Preço do Produto: ");
                        fflush(stdin);
                        scanf("%d[^\n]s", CA[i].nome4);
                        system("pause");
                        system("cls");
                    }
                    break;
                case 2:
                    system("cls");
                    for( i =1; i < quant; i ++){
                        system("cls");
                        printf("Exibindo Cadastro %d\n", i);
                        printf("\n");
                        printf(" Nome do Comprador: %s\n", CA[i].nome0);
                        printf(" Telefone do comprador: %s\n", CA[i].nome1);
                        printf(" Marca do Produto: %s\n", CA[i].nome2);
                        printf(" Código do Produto: %s\n", CA[i].nome3);
                        printf(" Preço do Produto: %s\n", CA[i].nome4);
                        system("pause");

                    }
                    break;
                case 3:
                    system("cls");
                    for(i = 1; i <quant; i ++){
                        printf("ALTERAR CADASTRO\n");
                        printf(" 1 - Nome do Camprador.");
                        printf("\n 2 - Telefone do Comprador.");
                        printf("\n 3 - Marca do Produto.");
                        printf("\n 4 - Código do Produto");
                        printf("\n 5 - Preço do Produto.\n\n");
                        printf(" Qual Opção você deseja Acessar?\n");
                        scanf("%d", &opcao1);

                        switch(opcao1){
                        case 1:
                            for(i = 1; i <quant; i ++){
                                system("cls");
                                printf("\n\nCADASTRO %d\n",i);
                                printf("\n Alterar Nome do comprador: ");
                                fflush(stdin);
                                scanf("%[^\n]s", &CA[i].nome0);
                                printf("\n Novo Nome do Comprador: %s\n\n");
                                system("pause");
                            }
                            break;
                        case 2:
                            for(i = 1; i <quant; i ++){
                                system("cls");
                                printf("\n\nCADASTRO %d\n",i);
                                printf("\n Alterar Telefone do Comprador:");
                                fflush(stdin);
                                scanf("%[^\n]s", &CA[i].nome1);
                                printf("\n Novo Telefone do Comprador: %s\n");
                                system("pause");
                            }
                            break;
                        case 3:
                            for( i = 0; i < quant; i ++){
                                system("pause");
                                printf("\n\nCADASTRO%d\n",i);
                                printf("\n Alterar Márca do Produto");
                                fflush(stdin);
                                scanf("%[^\n]s", &CA[i].nome2);
                                printf("\n Nova Marca do Produto: %s\n");
                                system("pause");
                            }
                            break;
                        case 4:
                            for(i = 1; i < quant; i ++){
                                system("cls");
                                printf("\n\nCADASTRO%d\n",i);
                                printf("\n Aletrar o Código do Produto: ");
                                fflush(stdin);
                                scanf("%[^\n]s", &CA[i].nome3);
                                printf("\n Novo Código do produto: %s\n");
                                system("pause");
                            }
                            break;
                        case 5:
                            for(i =1; i < quant; i ++){
                                system("cls");
                                printf("\n\nCADASTRO%d\n",i);
                                printf("\n Alterar Preço do produto");
                                fflush(stdin);
                                scanf("%[^\n]s", &CA[i].nome4);
                                printf("\n Novo Preço do Produto: %s\n");
                                system("pause");
                            }
                            break;
                        }

                    }
                    break;
                        case 4:
                            system("cls");
                            for(i = 1; i < quant; i ++){
                                printf("\n EXCLUIR CADASTRO ");
                                printf("\n");
                                printf(" 1 - Nome do Comprador: ");
                                printf("\n 2 - Telefone do Comprador");
                                printf("\n 3 - Marca do produto");
                                printf("\n 4 - Código do Produto");
                                printf("\n 5 - Preço do Produto");
                                printf("\n 6 - Excluir Todos os Dados\n\n");
                                printf(" Qual Opção Você deseja Acessar?\n");
                                scanf("%d", &opcao4);

                                switch(opcao4){
                                case 1:
                                    for(i = 1; i < quant; i ++){
                                        system("cls");
                                        memset(&CA[i].nome0, 0, sizeof(CA[i].nome0));
                                        printf(" Nome do Comprador Excluído!");
                                        system("pause");
                                    }
                                    break;
                                case 2:
                                    for(i = 1; i < quant; i ++){
                                        system("cls");
                                        memset(&CA[i].nome1, 0, sizeof(CA[i].nome1));
                                        printf(" Telefone do comprador Excluído!\n\n");
                                        system("pause");
                                    }
                                    break;
                                case 3:
                                    for(i = 1; i < quant; i ++){
                                        system("cls");
                                        memset(&CA[i].nome2, 0, sizeof(CA[i].nome2));
                                        printf(" Marca do Produto Excluído!");
                                        system("pause");
                                    }
                                    break;
                                case 4:
                                    for(i = 1; i < quant; i ++){
                                        system("cls");
                                        memset(&CA[i].nome3, 0, sizeof(CA[i].nome3));
                                        printf("Código do produto Excluído!\n");
                                        system("pause");
                                    }
                                    break;
                                case 5:
                                    for(i =1; i < quant; i ++){
                                        system("cls");
                                        memset(&CA[i].nome4, 0, sizeof(CA[i].nome4));
                                        printf(" Preço do Produto Excluído!\n");
                                        system("pause");
                                    }
                                    break;
                                case 6:
                                    for(i = 1; i < quant; i ++){
                                        system("cls");
                                        memset(&CA[i].nome0, 0, sizeof(CA[i].nome0));
                                        memset(&CA[i].nome1, 0, sizeof(CA[i].nome1));
                                        memset(&CA[i].nome2, 0, sizeof(CA[i].nome2));
                                        memset(&CA[i].nome3, 0, sizeof(CA[i].nome3));
                                        memset(&CA[i].nome4, 0, sizeof(CA[i].nome4));
                                        printf(" Todos os Dados Foram Excluídos!\n");
                                        system("pause");
                                    }
                                    break;

                                }
                            }
                            break;
                                case 5:
                                    system("cls");
                                    printf("Componentes: \n\n");
                                    printf("Eli santos Resedá");
                                    system("pause");
                                    break;
                                case 6:
                                    system("cls");
                                    printf("\nVocê realmente Deseja Sair do Sistema da C&A?\n");
                                    printf("\n 1 - Sair\n 2 - Não");
                                    printf("\n");
                                    scanf("%d", &opcao2);

                                    switch(opcao2){
                                    case 1:
                                        system("cls");
                                        printf("\n\n Volte Sempre a Loja C&A! \n");
                                        system("pause");
                                        return 0;
                                        break;


                                    }

                }
            }
            break;
        }
    }
    system("pause");
    return 0;
}
