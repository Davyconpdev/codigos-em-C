#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define n 50
#define TAM 370

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declara��o de vari�veis
    int i = 0, y;
    int opcao;
    char nome[n][TAM];
    char numero[n][TAM];

    // Solicitando dados
    do
    {

        printf("\n C�digo |       Descri��o          \n");
        printf("    1   - Adicionar um contato.    \n");
        printf("    2   - Exibir lista de contatos e sair.\n");
        printf("\n");
        printf("Selecione a op��o desejada: ");
        scanf("%d", &opcao);
        system("cls || clear");

        switch (opcao)
        {
        case 1:
            fflush(stdin);
            printf("\nNome: ");
            gets(nome[i]);
            fflush(stdin);
            printf("N�mero telef�nico: ");
            gets(numero[i]);
            i++;
            break;
            system("cls || clear");

        case 2:
            system("cls || clear");

            for (y = 0; y < i; y++)
            {
                fflush(stdin);
                printf("\n%d� Contato: %s\n %s\n", y + 1, nome[y], numero[y]);
            }
            break;

        default:
            printf("\nOp��o inv�lida! Escolha novamente\n\n");
            break;
        }

    } while (opcao != 2);

    return 0;
}