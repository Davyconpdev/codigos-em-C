#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define l 3
#define c 5

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i = 0, j = 0;
    char banda[l][100];
    char integrante[l][c][100];

    for (i = 0; i < l; i++)
    {
        printf("\nNome da banda: ");
        gets(banda[i]);

        for (j = 0; j < c; j++)
        {
            printf("Nome do %dº integrante: ", j + 1);
            gets(integrante[i][j]);
        }
        fflush(stdin);
    }
    system("cls");

    for (i = 0; i < l; i++)
    {
        printf("\n%dª Banda: %s\n", i + 1, banda[i]);

        for (j = 0; j < c; j++)
        {
            printf("%dº Integrante: %s\n", j + 1, integrante[i][j]);
        }
    }

    return 0;
}