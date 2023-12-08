#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 200
#define m 3
#define n 3

struct endereco
{
    char rua[tam];
    char numero[tam];
    char bairro[tam];
    char cidade[tam];
    char estado[tam];
};

struct dados_funcionario
{
    char nome[tam];
    char datadeadmissao[tam];
    char matricula[tam];
    struct endereco endereco;
};

struct dados_cliente
{
    char nome[tam];
    char nascimento[tam];
    struct endereco endereco;
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct dados_funcionario funcionario[m];
    struct dados_cliente cliente[n];
    int i = 0, j = 0;

    for (i = 0; i < m; i++)
    {
        printf("\nSolicitando dados do funcionário.");
        printf("\nNome:");
        gets(funcionario[i].nome);
        fflush(stdin);

        printf("Data de admissão:");
        gets(funcionario[i].datadeadmissao);
        fflush(stdin);

        printf("Matricula:");
        gets(funcionario[i].matricula);
        fflush(stdin);

        printf("Rua:");
        gets(funcionario[i].endereco.rua);
        fflush(stdin);

        printf("Número:");
        gets(funcionario[i].endereco.numero);
        fflush(stdin);

        printf("Bairro:");
        gets(funcionario[i].endereco.bairro);
        fflush(stdin);

        printf("Cidade:");
        gets(funcionario[i].endereco.cidade);
        fflush(stdin);

        printf("Estado:");
        gets(funcionario[i].endereco.estado);
        fflush(stdin);

        for (j = 0; j < m; j++)
        {
            printf("\nSolicitando dados do cliente.");
            printf("\nNome:");
            gets(cliente[j].nome);
            fflush(stdin);

            printf("Data de nascimento:");
            gets(cliente[j].nascimento);
            fflush(stdin);

            printf("Rua:");
            gets(cliente[j].endereco.rua);
            fflush(stdin);

            printf("Número:");
            gets(cliente[j].endereco.numero);
            fflush(stdin);

            printf("Bairro:");
            gets(cliente[j].endereco.bairro);
            fflush(stdin);

            printf("Cidade:");
            gets(cliente[j].endereco.cidade);
            fflush(stdin);

            printf("Estado:");
            gets(cliente[j].endereco.estado);
            fflush(stdin);
        }
    }
    system("cls || clear");

    for (i = 0; i < n; i++)
    {
        printf("\n==============================================\n");

        printf("\nDados do %dº funcionário.", i + 1);
        printf("\nNome: %s\n", funcionario[i].nome);
        printf("Data de admissão: %s\n", funcionario[i].datadeadmissao);
        printf("Matricula: %s\n", funcionario[i].matricula);
        printf("Rua: %s\n", funcionario[i].endereco.rua);
        printf("Número: %s\n", funcionario[i].endereco.numero);
        printf("Bairro: %s\n", funcionario[i].endereco.bairro);
        printf("Cidade: %s\n", funcionario[i].endereco.cidade);
        printf("Estado: %s\n", funcionario[i].endereco.estado);
        printf("\n==============================================\n");
        
        for (j = 0; j < m; j++)
        {
            printf("\nDados do %dº cliente.", j + 1);
            printf("\nNome: %s\n", cliente[j].nome);
            printf("Data de nascimento: %s\n", cliente[j].nascimento);
            printf("Rua: %s\n", cliente[j].endereco.rua);
            printf("Número: %s\n", cliente[j].endereco.numero);
            printf("Bairro: %s\n", cliente[j].endereco.bairro);
            printf("Cidade: %s\n", cliente[j].endereco.cidade);
            printf("Estado: %s\n", cliente[j].endereco.estado);
            printf("\n==============================================\n");
        }
    }

    return 0;
}