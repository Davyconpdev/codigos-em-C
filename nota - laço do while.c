#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int primeiranota;
    int segundanota;
    float media;

    do
    {

        printf("Primeira nota:");
        scanf("%d", &primeiranota);

        if (primeiranota < 0 || primeiranota > 10)
        {
            printf("Nota inválida. informe sua nota novamente...\n");
        }

    } while (primeiranota < 0 || primeiranota > 10);

    do
    {

        printf("Segunda nota:");
        scanf("%d", &segundanota);

        if (segundanota < 0 || segundanota > 10)
        {
            printf("Nota inválida. informe sua nota novamente...\n");
        }

    } while (segundanota < 0 || segundanota > 10);

    media = (primeiranota + segundanota) / 2;
 
 system("cls");

    printf("nota:%d \n", primeiranota);
    printf("nota:%d \n", segundanota);
    printf("Média: %.2f \n", media);

    return 0;
}