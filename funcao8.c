#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define n 6

void verificar(int numero[])
{
    int i = 0, pares = 0, impares = 0;

for (i = 0; i < n; i++)
{
  if (numero[i] %2 == 0)
  {
    pares++;
  } else if(numero[i] %2 == 1) {
    impares++;
  } 
}
    printf("Quantidade de números pares: %d\n",pares);
    printf("Quantidade de números ímpares: %d\n",impares);
}

int main()
{ setlocale(LC_ALL, "portuguese");

    int numero[n], i = 0;

    for (i = 0; i < n; i++)
    {
        printf("Digite o %dº número:", i + 1);
        scanf("%d", &numero[i]);
    }
    verificar(numero);

    return 0;
}
