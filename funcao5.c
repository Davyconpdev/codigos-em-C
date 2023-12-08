#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//void mensagem(int numero) {
//if (numero %2 == 0)
//{
//printf("PAR.\n",numero);
//} else {
//printf("ÍMPAR.\n",numero);
//}
//}
// OPERADOR TERNÁRIO
void mensagem(int numero) {    
numero %2 == 0 ? printf("%d - par\n",numero) : printf("%d - ímpar\n",numero); }

int main() {
setlocale(LC_ALL,"portuguese");

int numero;

printf("digite um número:");
scanf("%d",&numero);

mensagem(numero);

    return 0;
}