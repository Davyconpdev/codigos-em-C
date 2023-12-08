#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float inflacao(float preco) {
float resultado;
//preco < 100 ? preco * 1.1 : preco * 1.2; 
// return preco < 100 ? preco * 1.1 : preco * 1.2;
if (preco < 100)
{
    resultado = preco * 1.1;
} else {
    resultado = preco * 1.2; 
}
return resultado;
}
int main() {
setlocale(LC_ALL,"portuguese");

float preco, precofinal;

printf("Informe o preço do produto:");
scanf("%f",&preco);

precofinal = inflacao(preco);

printf("Valor inflacionado: %.2f\n",precofinal);

return 0;
}