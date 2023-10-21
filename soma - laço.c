#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    int numero = 0;
    int soma = 0;

    for (i = 1; i <= 5; i++)
    {
        printf("Digite %dº número:", i);
        scanf("%d", &numero);
        // soma = soma + numero.
        soma += numero;
    }
    printf("soma: %d \n", soma);

    return 0;
}