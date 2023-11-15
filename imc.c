#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
setlocale(LC_ALL,"portuguese");

float peso, altura, imc;

printf("Informe seu peso(Kg):");
scanf("%f",&peso);
system("cls");
printf("Informe sua altura(m):");
scanf("%f",&altura);
system("cls");

imc = peso / (altura * altura);

printf("imc: %.2f",imc);
printf("\n");

if(imc < 18.6) {
    printf("Abaixo do peso.");

} else if(imc >= 18.6 && imc < 25) {
    printf("Peso ideal.");

} else if(imc >= 25 && imc < 30) {
    printf("Levemente acima do peso.");

} else if(imc >= 30 && imc < 35) {
   printf("Obesidade grau 1."); 

} else if(imc >= 35 && imc < 40) {
    printf("Obesidade grau 2 (severa).");

} else {
    printf("Obesidade 3 (mórbida).");
}
    
    return 0;
}