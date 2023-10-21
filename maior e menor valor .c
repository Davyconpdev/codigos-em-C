#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

setlocale(LC_ALL,"portuguese");

//declarar variÃ¡veis.
int primeironumero;
int segundonumero;
int soma;
int produto;
int maior;
int menor;
float media;

printf ("digite um número:");
scanf ("%d",&primeironumero);

printf ("digite outro número:");
scanf ("%d",&segundonumero);

//calculando...
soma = primeironumero + segundonumero;
produto = primeironumero * segundonumero;
media = soma / 2;

//verificar maior e menor.
menor = primeironumero < segundonumero ? primeironumero : segundonumero;
maior = primeironumero > segundonumero ? primeironumero : segundonumero;


printf("soma: %d \n",soma);
printf("produto: %d \n" ,produto);
printf("Média: %.2f \n",media);
printf("Maior número: %d \n",maior);
printf("Menor número: %d \n",menor);



    
    
    return 0;
}