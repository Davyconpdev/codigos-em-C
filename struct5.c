#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 200
#define n 3

struct informe_livro 
{
    char nome[tam];
    char autor[tam];
    char categoria[tam];
    float preco;
};
 
 int main() 
 {
 setlocale(LC_ALL,"portuguese");
 
struct informe_livro livro[n];
int i = 0;

for (i = 0; i < n; i++)
{
printf("\nSolicitando informações do livro.\n");
printf("Nome do livro:");
gets(livro[i].nome);

printf("Autor:");
gets(livro[i].autor);
fflush(stdin);

printf("Categoria:");
gets(livro[i].categoria);

printf("Preço (R$):");
scanf("%f",&livro[i].preco);
fflush(stdin);
}
system("cls || clear");

for (i = 0; i < n; i++)
{
    printf("\nNome do livro: %s\n",livro[i].nome);
    printf("Autor: %s\n",livro[i].autor);
    printf("Categoria: %s\n",livro[i].categoria);
    printf("Preço (R$): %.2f\n",livro[i].preco);
    printf("\n=================================\n");
}

    return 0;
 }