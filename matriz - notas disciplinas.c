#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define n 3
#define y 2

int main()
{
    setlocale(LC_ALL,"portuguese");

    int i = 0, c = 0;
    char disciplina[n][100];
    float soma = 0, media[n], notas[n][y];

    for (i = 0; i < n; i++)
    {
        printf("\nInforme a Disciplina: ");
        gets(disciplina[i]);

        for (c = 0; c < y; c++)
        {
            printf("\nInforme sua %dº nota: ", c + 1);
            scanf("%f", &notas[i][c]);

            soma += notas[i][c];
        }
            media[i] = soma / y;
            soma = 0;
            fflush(stdin);
    }
    system("cls");

    for (i = 0; i < n; i++)
    {
        printf("\nDisciplina %d: %s\n",i+1, disciplina[i]);

        for (c = 0; c < y; c++)
        {
            printf("%dº Nota: %.1f\n", c + 1, notas[i][c]);
        }
            printf("\nMédia: %.1f\n", media[i]);
    }

    return 0;
}