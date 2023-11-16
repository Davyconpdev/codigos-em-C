#include <stdio.h>
#include <locale.h>

#define n 2
#define y 3

int main()
{setlocale(LC_ALL,"portuguese");


    char aluno[2][200]; 
    float notas[2][3];
    int i, j;

    system("cls");

    for (i = 0; i < n; i++)
    {
        printf("\nInforme o nome do %dº Aluno: ", i + 1);
        gets(aluno[i]);

        for (j = 0; j < y; j++)
        {
            printf("\ninsira a %dª Nota:", j + 1);
            scanf("%f", &notas[i][j]);
        }
    fflush(stdin);
    }

    for (i = 0; i < n; i++)
    {
        printf("Nome do %dº Aluno: %s\n", i + 1, aluno[i]);
        for (j = 0; j < y; j++)
        {
            printf("%dª nota: %.1f\n", j + 1, notas[i][j]);
        }
    }

    return 0;
}