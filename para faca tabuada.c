#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i;

    // mostrar de 1 até 10.
    // para i de 1 até 10 passo 1 faça.
    for (i = 1; i <= 10; i++)
    {
        printf("3 x %d = %d \n", i, i * 3);
    }
    printf("\n");
    for (i = 1; i <= 10; i++)
    {
        printf("5 x %d = %d \n", i, i * 5);
    }
    printf("\n");
    for (i = 1; i <= 10; i++)
    {

        printf("7 x %d = %d \n", i, i * 7);
    }
    printf("\n");
    return 0;
}