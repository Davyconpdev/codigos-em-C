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

int somar (int num1, int num2) {
int resultado;
resultado = num1 + num2;
return resultado;
//return 
}

int main() {
    setlocale(LC_ALL,"portuguese");

int primeironumero;
int segundonumero;

cabecalho();

printf("Digite o primeiro número:");
scanf("%d",&primeironumero);

printf("Digite o segundo número:");
scanf("%d",&segundonumero);
limpatela();

cabecalho();
printf("Soma: %d\n", somar(primeironumero, segundonumero));

return 0;
}