#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define l 5
#define n 3

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i = 0, c = 0;
    float nota[l][n];
    float soma = 0, media[l];
    int idade[l];
    char aluno[l] [100];
    char situacao[l] [100];

    for (i = 0; i < l; i++)
    {
        printf("Nome do %d� aluno:",i+1);
        gets(aluno[i]);

        printf("Idade:");
        scanf("%d",&idade[i]);
        fflush(stdin);

        for (c = 0; c < n; c++)
        {
            printf("Informe a %d� nota:", c + 1);
            scanf("%f", &nota[i][c]);
            soma += nota[i][c];
        }
        media[i] = soma / n;
        soma = 0;
        fflush(stdin);
        printf("\n");

        if (media[i] >= 7)
        {
            strcpy(situacao[i], "APROVADO!");
        }
         if (media[i] < 7 && media[i] >= 5)
        {
            strcpy(situacao[i], "RECUPERA��O.");
        }
        else if(media[i] < 5)
        {
            strcpy(situacao[i], "REPROVADO.");
        } 
    }
    system("cls || clear");
    // resultados
    for (i = 0; i < l; i++)
    {
        printf("Nome do %d� aluno: %s\n",i+1, aluno[i]);
        printf("Idade: %d anos\n", idade[i]);

        for (c = 0; c < n; c++)
        {
            printf("%d� nota: %.1f\n", c + 1, nota[i][c]);
        }
        printf("M�dia: %.1f\n", media[i]);
        printf("Situa��o do aluno: %s\n", situacao[i]);
        printf("\n");
    }

    return 0;
}