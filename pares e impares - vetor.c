#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
setlocale(LC_ALL,"portuguese");

int i, par = 0, impar = 0, n = 6, numero[n];

for ( i = 0; i < n; i++)
{
 printf("digite o %dº número:",i+1);
 scanf("%d",&numero[i]);

if (numero[i] %2 == 0) {
    par++;
} else {
    impar++;
}
}
system("cls");

for ( i = 0; i < n; i++)
{
  printf("%dº número: %d\n",i+1, numero[i]);
}
printf("\n");
printf("Quantidade de números Pares: %d\n",par);
printf("Quantidade de números Ímpares: %d\n",impar);

   return 0;
}