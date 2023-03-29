#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// https://www.youtube.com/watch?v=4B6kUBCcUWE
// https://www.youtube.com/watch?v=YDHUSdtaECs
/*
    Curso de Programação C| Como criar novos tipos de dados em C com typedef
    Struct| Aula 167.
    Dia 28/03/2023 ás 09:26
 */

 //Criação do tipo Pessoa
 typedef struct{
     int dia, mes, ano;

 }DataNas;
 typedef struct {
    DataNas dataNas;
    int idade;
    char sexo;
    char nome[100];
 }Pessoa;

 //Função que lê os dados de uma pessoa e retorna para quem chamou
 Pessoa lerPessoa(){
    Pessoa p;
    printf("\nDigite seu nome: ");
    fgets(p.nome, 100, stdin);
    printf("Digite sua idade: ");
    scanf("%d", &p.idade);
    scanf("%c");
    printf("Digite f ou m para sexo: ");
    scanf("%c", &p.sexo);
    printf("Digite sua data de nascimento no formato dd mm aaaa:");
    scanf("%d %d %d", &p.dataNas.dia, &p.dataNas.mes, &p.dataNas.ano);
    scanf("%c");
   // printf("Nome: %s\nIdade: %d\nSexo: %c\n", p.nome, p.idade, p.sexo);
   // printf("Data de nasc.: %d/%d/%d\n", p.dataNas.dia, p.dataNas.mes, p.dataNas.ano);
    return p;
 }
 void imprimirPessoa(Pessoa p){
     printf("\tNome: %s", p.nome);
     printf("\tIdade: %d\n", p.idade);
     printf("\tSexo: %c\n", p.sexo);
     printf("\tData de Nasc.: %d/%d/%d\n\n", p.dataNas.dia,p.dataNas.mes, p.dataNas.ano);

 }

int main(){
  /*  Exemplo de forma estática
    Pessoa pessoa1;
    pessoa1.idade = 35;
    pessoa1.sexo = 'f';
    strcpy(pessoa1.nome,"Maria Madalena");*/

    //Exemplo de forma dinâmica
    int i;
    Pessoa pessoas[3];
    //DataNas data;
    //printf("%d\n", sizeof(pessoa));
    for(i = 0; i < 3; i ++)
         pessoas[i] = lerPessoa();
    for(i = 0; i < 3; i ++)
        imprimirPessoa(pessoas[i]);
    return 0;
}
