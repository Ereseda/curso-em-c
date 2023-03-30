#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

#define TAM 100

void cadastrarCliente();
void imprimirCliente();

typedef struct sEnd{
    char logradouro[100];
    int numero;
    char bairro;
    char cep[10];
    char cidade[60];
    char estado[50];
}END;

typedef struct sCliente{
    char nome[100];
    char email[100];
    char tel[15];
    int idade;
    END endereco[2];
}CLIENTE;

int main(){
    setlocale(LC_ALL, "Portuguese");

    cadastrarCliente();
    imprimirCliente();

    return 0;
}

void cadastrarCliente(){
       setlocale(LC_ALL, "Portuguese");
       CLIENTE cli[TAM];
       int op, i;
       for(int i = 0; i < 2; i++){
        printf("Digite o nome do cliente:");
        scanf("%{^\n]", cli[i].nome);

        printf("Digite o email do cliente: ");
        scanf("%s", cli[i].email);

        printf("Digite o telefone do cliente: ");
        scanf("%s", cli[i].tel);

        printf("Digite a idade do cliente: ");
        scanf("%s", &cli[i].idade);
        fflush(stdin);
    }
    for(int j = 0; j < 2; j++){

        printf("Cadastrando Endereço: %d\n", j + 1);

        printf("Entre com o logradouro do cliente: \n");
        scanf(" %[^\n]", cli[i].endereco [j].logradouro);

        printf("Digite o número da residência: \n");
        scanf("%d", &cli[i].endereco [j].numero);
        fflush(stdin);

        printf("Para cadastrar outro endereço, digite: \n 1");
        scanf("%d", &op);

        if(op == 1){
            break;
        }
    }

}
void imprimirCliente(){
    setlocale(LC_ALL, "Portuguese");
    CLIENTE cli[TAM];
    for(int i = 0; i < 2; i++){
        printf("NOME: %s\nEMAIL: %s\nTEL: %s\n", cli[i].nome, cli[i].email, cli[i].tel);
    }
}
