#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 200

void cabecalho() {

printf("\n=================================\n");
printf("\tSENAI");
printf("\n=================================\n");
}

void limpatela() {
system("cls || clear");
}

void dados(char nome[tam], int idade) {
printf("Nome: %s\n",nome);
printf("Idade: %d anos\n",idade);
}

int main() {

char nome[tam];
int idade;

cabecalho();

printf("Digite seu nome:");
gets(nome);

printf("Digite sua idade: ");
scanf("%d",&idade);
limpatela();

cabecalho();

dados(nome, idade);

return 0;
}