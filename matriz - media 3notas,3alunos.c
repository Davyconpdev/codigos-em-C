#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define n 4
#define c 3

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i = 0, j = 0;
    float notas[n][c];
    float soma = 0, media[n];
    char aluno[n][100];

    for (i = 0; i < n; i++)
    {
        printf("Nome do %dº aluno:", i + 1);
        gets(aluno[i]);

        for (j = 0; j < c; j++)
        {
            printf("%dª Nota:", j + 1);
            scanf("%f", &notas[i][j]);

            soma += notas[i][j];
        }
        media[i] = soma / c;
        soma = 0;
        fflush(stdin);
    }
    system("cls");

    for (i = 0; i < n; i++)
    {
        printf("\n%dº Aluno: %s\n", i + 1, aluno[i]);

        for (j = 0; j < c; j++)
        {
            printf("%dª Nota: %.1f\n", j + 1, notas[i][j]);
        }
        printf("Média: %.1f\n", media[i]);
    }

    return 0;
}