#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 200

struct dados_usuario
{
    char nome[tam];
    char cpf[tam];
    int idade;
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct dados_usuario funcionario;
    struct dados_usuario cliente;

    printf("\nColetando os dados do funcionário.");
    printf("\nNome:");
    gets(funcionario.nome);
    fflush(stdin);

    printf("Idade:");
    scanf("%d", &funcionario.idade);
    fflush(stdin);

    printf("CPF:");
    gets(funcionario.cpf);

    system("cls || clear");

    printf("\nColetando os dados do cliente.");
    printf("\nNome:");
    gets(cliente.nome);
    fflush(stdin);

    printf("Idade:");
    scanf("%d", &cliente.idade);
    fflush(stdin);

    printf("CPF:");
    gets(cliente.cpf);

    system("cls || clear");

    printf("\nDados do funcionário.\n");
    printf("\nNome: %s\n", funcionario.nome);
    printf("Idade: %d anos\n", funcionario.idade);
    printf("CPF: %s\n", funcionario.cpf);
    printf("\n==================================\n");
    printf("\nDados do cliente.\n");
    printf("\nNome: %s\n", cliente.nome);
    printf("Idade: %d anos\n", cliente.idade);
    printf("CPF: %s\n", cliente.cpf);

    return 0;
}