#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int primeironum, segundonum, maiornum, menornum;

    printf("informe um n�mero:");
    scanf("%d", &primeironum);
    printf("informe outro n�mero:");
    scanf("%d", &segundonum);

    fflush(stdin);

    menornum = primeironum < segundonum ? primeironum : segundonum;
    maiornum = segundonum > primeironum ? segundonum : primeironum;

    printf("menor n�mero:%d\n", menornum);
    printf("maior n�mero:%d\n", maiornum);

    return 0;
}