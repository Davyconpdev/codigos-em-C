#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 300
#define n 3
#define m 2

struct dados_aluno
{
    char nome[tam];
    char numerodaturma[tam];
    int idade;
    float nota[m];
    float soma, media[n];
    char situacao[tam];
};

struct dados_professor
{
    char nome[tam];
    char disciplina[m][tam];
    char turma[m][tam];
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i = 0, j = 0;
    int y = 0, z = 0;
    struct dados_aluno aluno[n];
    struct dados_professor professor[m];

    for (i = 0; i < n; i++)
    {
        printf("\nSolicitando dados do %d aluno.", i + 1);
        printf("\nNome:");
        gets(aluno[i].nome);
        fflush(stdin);
        printf("Número da turma:");
        gets(aluno[i].numerodaturma);
        fflush(stdin);
        printf("Idade:");
        scanf("%d", &aluno[i].idade);
        fflush(stdin);

        for (y = 0; y < m; y++)
        {
            printf("%dª nota:", y + 1);
            scanf("%f", &aluno[i].nota[y]);

            aluno[i].soma += aluno[i].nota[y];
            aluno[i].media[i] = aluno[i].soma / m;
            fflush(stdin);
        }
            aluno[i].soma = 0;
        system("cls || clear");
    }

    for (j = 0; j < m; j++)
    {
        printf("\nSolicitando dados do %dº professor.", j + 1);
        printf("\nNome:");
        gets(professor[j].nome);
        fflush(stdin);

        for (z = 0; z < m; z++)
        {
            printf("%dª Turma:", z + 1);
            gets(professor[j].turma[z]);
            fflush(stdin);
            printf("Disciplina:");
            gets(professor[j].disciplina[z]);
            fflush(stdin);
        }
    }

    system("cls || clear");

    for (i = 0; i < n; i++)
    {
        printf("\n===========================================");
        printf("\nDados do %dº aluno.\n", i + 1);
        printf("\nNome: %s\n", aluno[i].nome);
        printf("Número da turma: %s\n", aluno[i].numerodaturma);
        printf("Idade: %d anos\n", aluno[i].idade);

        for (y = 0; y < m; y++)
        {
            printf("%dª nota: %.1f\n", y + 1, aluno[i].nota[y]);
            fflush(stdin);
        }
        printf("\nMédia: %.1f\n", aluno[i].media[i]);
        fflush(stdin);

        if (aluno[i].media[i] >= 7)
        {
            printf("APROVADO!");
        }
        else
        {
            printf("REPROVADO.");
        }
        printf("\n================================================");
    }

    for (j = 0; j < m; j++)
    {
        printf("\n================================================\n");
        printf("\nDados do %dº professor.\n", j + 1);
        printf("\nNome: %s\n", professor[j].nome);

        for (z = 0; z < m; z++)
        {
            printf("\n%dª Turma: %s\n", z + 1, professor[j].turma[z]);
            printf("Disciplina: %s\n", professor[j].disciplina[z]);
        }
    }

    return 0;
}