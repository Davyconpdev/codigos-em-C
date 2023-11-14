#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
setlocale(LC_ALL,"portuguese");

int i;
int maiornum = 0, menornum = 999;
int n = 5, numero[n];

for (i = 0; i < n; i++)
{
 printf("digite o %dº número:",i+1);
 scanf("%d",&numero[i]);
}
system("cls");

for (i = 0; i < n; i++)
{
printf("%dº número: %d\n",i+1, numero[i]);

maiornum = numero[i] > maiornum ? numero[i] : maiornum;

menornum = numero[i] < menornum ? numero[i] : menornum;
}
printf("Maior número: %d\n",maiornum);
printf("Menor número: %d\n",menornum);
    
    return 0;
}