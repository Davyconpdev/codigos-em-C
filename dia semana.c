#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int dia;

    printf("(Do 1 até o 7) digite um número:");
    scanf("%d", &dia);

    switch (dia)
    {
    case 2:
        printf("Segunda-feira - Dia Útil.");
        break;

    case 3:
        printf("Terça-feira - Dia Útil.");
        break;

    case 4:
        printf("Quarta-feira - Dia Útil.");
        break;

    case 5:
        printf("Quinta-feira - Dia Útil.");
        break;

    case 6:
        printf("Sexta-feira - Dia Útil.");
        break;

    case 1:
        printf("Domingo - Final de Semana!");
        break;

    case 7:
        printf("Sabádo - Final de Semana!");
        break;

    default:
        printf("Número Inválido.");
        break;
    }

    return 0;
}