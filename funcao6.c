#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define n 6

void cabecalho() {
printf("\n=================================\n");
printf("\tSENAI");
printf("\n=================================\n");
}

void limpatela() {
system("cls || clear");
}

void verifique(int numero[]) {
int i, par = 0, impar = 0;

for (i = 0; i < n; i++) {   
if (numero[i] %2 == 0)
{    
 par++;
} else {
 impar++;
}
}
printf("Quantidade de números pares: %d\n",par);
printf("Quantidade de números ímpares: %d\n",impar);
}

int main() {
setlocale(LC_ALL,"portuguese");

int numero[n], i = 0;

cabecalho();
for (i = 0; i < n; i++) {
printf("digite um número: ");
scanf("%d",&numero[i]);   
}
limpatela();
verifique(numero);

return 0;
}