#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define n 5

int main() {
setlocale(LC_ALL,"portuguese");

int i = 0, impar = 0, par = 0, negativo = 0, maiornumero = 0, menornumero = 9999, numero[n];
float somapar = 0, soma = 0, mediapar = 0, media = 0;

for (i = 0; i < n; i++)
{
    printf("Digite o %d� n�mero:",i+1);
    scanf("%d",&numero[i]);
    soma += numero[i];
    fflush(stdin);
     
     if (numero[i] %2 == 1)
     {
        impar++;
     } else {
        par++;
        somapar += numero[i];
     }
     mediapar = somapar / par;

     if (numero[i] < 0)
     {
        negativo++;
     }
     
     maiornumero = numero[i] > maiornumero ? numero[i] : maiornumero;
     menornumero = numero[i] < menornumero ? numero[i] : menornumero;

    media = soma / n;
}
system("cls || clear");
printf("Quantidade de n�meros impares: %d\n",impar);
printf("Quantidade de n�meros negativos: %d\n",negativo);
printf("Maior n�mero: %d\n",maiornumero);
printf("Menor n�mero: %d\n",menornumero);
printf("M�dia dos n�meros pares: %.1f\n",mediapar);
printf("M�dia dos n�meros inseridos: %.1f\n",media);


    
    return 0;
}