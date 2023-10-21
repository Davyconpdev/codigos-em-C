#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float primeironumero;
    float segundonumero;
    float resultado;
    char opcao;

    printf("digite um número:");
    scanf("%f", &primeironumero);

    printf("digite outro número:");
    scanf("%f", &segundonumero);

    fflush(stdin); // limpa o cache de imput.

    printf("digite * / + - :");
    printf("escolha uma operação:");
    scanf("%c", &opcao);

    system("cls || clear");

    switch (opcao)

    {
    case '*':
        resultado = primeironumero * segundonumero;
        break;
    case '/':
        resultado = primeironumero / segundonumero;
        break;
    case '+':
        resultado = primeironumero + segundonumero;
        break;
    case '-':
        resultado = primeironumero - segundonumero;
        break;
    default:
        printf("operação Inválida.");
        break;
    }

    printf("primeiro número: %.1f \n", primeironumero);
    printf("segundo número: %.1f \n", segundonumero);
    printf("operação escolhida: %c \n", opcao);
    printf("Resultado: %.2f \n", resultado);

    return 0;
}
