#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float nota;
    int i;
    float soma = 0;
    float media;

    for (i = 0; i < 3; i++)
    {

        do
        {
            printf("Sua %dº nota: \n", i + 1);
            scanf("%f", &nota);

        } while (nota < 0 || nota > 10);

        soma += nota;
    }
    system("cls");

    media = soma / i;

    if (media >= 7)
    {
        printf("APROVADO. Parabéns!");
    }
    else if (media >= 5)
    {
        printf("RECUPERAÇÃO.");
    }
    else
    {
        printf("REPROVADO.");
    }
    printf("\nMédia: %.2f \n", media);
    return 0;
}
