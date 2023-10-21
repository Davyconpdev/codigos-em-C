#include <stdio.h>
#include <stdlib.h>

int main()     {

    int numero;
    

    printf("Insira um número:");
    scanf("%d", &numero);

    
     if (numero %2 == 0)
    {
        printf("Esse número é Par");
    }
    else
    {
        printf("Esse número é Ímpar");
    }

    return 0;
}
