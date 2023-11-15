#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
setlocale(LC_ALL,"portuguese");

int i = 0, par = 0, impar = 0, positivo = 0, negativo = 0;
int maiornumero = 0, menornumero = 0, n = 5, numero[n];
float soma = 0, media = 0;

for (i = 0; i < n; i++) {

    printf("digite o %dº número:",i+1);
    scanf("%d",&numero[i]);
    fflush(stdin);
    
    if(numero[i] %2 == 0) {
        par++;
    } else {
        impar++;
    }
    
    if(numero[i] >= 0) {
        positivo++;
    } else {
       negativo++; 
    }
    
    maiornumero = numero[i] > maiornumero ? numero[i] : maiornumero;
    menornumero = numero[i] < menornumero ? numero[i] : menornumero;
    
    soma += numero[i];
}
    media = soma / n;

 system("cls");
 printf("Quantidade de números pares: %d\n", par);
 printf("Quantidade de números impares: %d\n", impar);
 printf("\n");
 printf("Quantidade de números positivos: %d\n", positivo);
 printf("Quantidade de números negativos: %d\n", negativo);
 printf("\n");
 printf("Maior número: %d\n", maiornumero);
 printf("Menor número: %d\n", menornumero);
 printf("\n");
 printf("Quantidade de números inseridos: %d\n", n);
 printf("Média dos números inseridos: %.1f\n", media);

 return 0;
}
