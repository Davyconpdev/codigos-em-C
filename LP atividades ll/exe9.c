#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero, i;

    printf("insira um n�mero:");
    scanf("%d", &numero);

    if (numero <= 1)
    {
        printf("N�o � primo.");
    }
    else
    {
        for (i = 2; i < numero; i++)
        {
            if (numero % i == 0)
            {
                printf("N�o � primo.");
                break;
            }
        }
        if (i == numero)
        {
            printf("� primo.");
        }
    }
    return 0;
}
