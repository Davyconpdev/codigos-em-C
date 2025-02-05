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
    char produto[n][TAM];
    float preco[n];
    int quantidade[n];
    float total[n];
    int opcao;
    int i = 0, y;

    // Solicitando dados
    do
    {
        printf("\nC�digo |         Descri��o            \n");
        printf("\n  1   -   Adicionar uma venda.        \n");
        printf("\n  2   - Exibir total de vendas e sair.\n");
        printf("\n");
        printf("\nSeleciona a op��o desejada:");
        scanf("%d", &opcao);
        system("cls || clear");

        switch (opcao)
        {
        case 1:
            fflush(stdin);
            printf("\nNome do produto:");
            gets(produto[i]);
            printf("Valor(R$):");
            scanf("%f", &preco[i]);
            printf("Quantidade:");
            scanf("%d", &quantidade[i]);
            i++;
            break;
            system("cls || clear");

        case 2:
            system("cls || clear");

            for (y = 0; y < i; y++)
            {
                total[y] = preco[y] * quantidade[y];

                printf("\n%d� Produto: %s\n", y + 1, produto[y]);
                printf("Pre�o: %.2f\n", preco[y]);
                printf("Quantidade: %d\n", quantidade[y]);
                printf("Total: %.2f\n", total[y]);
            }
            break;

        default:
            printf("\nOp��o inv�lida! Escolha novamente\n\n");
            break;
        }

    } while (opcao != 2);

    return 0;
}