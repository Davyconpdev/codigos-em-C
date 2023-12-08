#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 100

struct dados_pessoal 
{
    char nome[tam];
    int idade;
    char endereco[tam];
};


int main() {
setlocale(LC_ALL,"portuguese");

struct dados_pessoal pessoa;

printf("\nSolicitando dados do aluno.\n");
printf("Nome:");
gets(pessoa.nome);

printf("Idade:");
scanf("%d",&pessoa.idade);
fflush(stdin);

printf("Endereço:");
gets(pessoa.endereco);

system("cls || clear");

printf("Nome: %s\n", pessoa.nome);
printf("Idade: %d anos\n", pessoa.idade);
printf("Endereço: %s\n", pessoa.endereco);

return 0;
}