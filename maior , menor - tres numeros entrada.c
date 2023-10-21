#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    int primeironumero;
    int segundonumero;
    int terceironumero;
    int maior;
    int menor;

    printf("digite um número:");
    scanf("%d",&primeironumero);

    printf("digite outro número:");
    scanf("%d",&segundonumero);

    printf("digite mais outro número:");
    scanf("%d",&terceironumero);

    system("cls || clear");
    
 
  maior = primeironumero > segundonumero ? primeironumero : segundonumero;
  maior = maior > terceironumero ? maior : terceironumero;

  menor = primeironumero < segundonumero ? primeironumero : segundonumero;
  menor = menor < terceironumero ? menor : terceironumero;



   printf("primeiro número: %d \n",primeironumero);
   printf("segundo número: %d \n",segundonumero);
   printf("terceiro número: %d \n",terceironumero);
   printf("MAIOR número: %d \n",maior);
   printf("MENOR número: %d \n",menor);

    return 0;
}