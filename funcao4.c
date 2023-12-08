#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho() {
printf("\n=================================\n");
printf("\tSENAI");
printf("\n=================================\n");
};

void limpatela() {
system("cls || clear");
};

void limpacache() {
fflush(stdin);
};

void tabuada(int num) {
int i = 1;

for (i = 1; i <= 10; i++)
{
printf("%d x %d = %d \n", num, i, num * i);
}
};

int main() {
setlocale(LC_ALL,"portuguese");

int numero;

cabecalho();

printf("digite um número:");
scanf("%d",&numero);
limpacache();
limpatela();

tabuada(numero);

return 0;
}
