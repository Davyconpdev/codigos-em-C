#include <stdio.h>
#include <locale.h>

#define tam 100
#define n 3
#define c 2

struct dados_aluno
{
    char nome[tam];
    int idade;
    float nota[c];
    float soma;
    float media;
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct dados_aluno aluno[n];
    int i = 0, j = 0;

    for (i = 0; i < n; i++)
    {
        printf("\nSolicitando dados do aluno.\n");
        printf("Nome:");
        gets(aluno[i].nome);
        fflush(stdin);

        printf("Idade:");
        scanf("%d", &aluno[i].idade);
        fflush(stdin);

        for (j = 0; j < c; j++)
        {
            printf("%dª nota:", j + 1);
            scanf("%f", &aluno[i].nota[j]);
            aluno[i].soma += aluno[i].nota[j];
        }
        aluno[i].media = aluno[i].soma / c;
        aluno[i].soma = 0;
        fflush(stdin);
    }
    
    system("cls || clear");

    for (i = 0; i < n; i++)
    {
        printf("\nNome: %s\n", aluno[i].nome);
        printf("Idade: %d anos\n", aluno[i].idade);
        fflush(stdin);

        for (j = 0; j < c; j++)
        {
            printf("%dª nota: %.1f\n", j + 1, aluno[i].nota[j]);
        }
        printf("Média: %.1f\n", aluno[i].media);
    }

    return 0;
}