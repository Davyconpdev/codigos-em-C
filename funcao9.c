#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float conversao(float metro) {
return metro * 100;
};

int main() {
setlocale(LC_ALL,"portuguese");

float centimetro, metro;

printf("Insira um valor (em metros):");
scanf("%f",&metro);

centimetro = conversao(metro);

printf("metros -> centimetro: %.1f\n",centimetro);

    return 0;
}