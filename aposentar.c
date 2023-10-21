#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
  
  setlocale(LC_ALL,"portuguese");

 int anonascimento = 0;
 int anotrabalho = 0;
 int idade = 0;
 int tempotrabalho = 0;
 char nome[100];
 char resultado [170];

 printf ("Seu nome:");
 gets (nome);

 printf ("Ano de nascimento:");
 scanf ("%d",&anonascimento);

 printf ("Em que ano começou a trabalhar?:");
 scanf ("%d",&anotrabalho);

 system ("cls || clear");

 idade = 2023 - anonascimento;
 tempotrabalho = 2023 - anotrabalho;
  
if(tempotrabalho >= 30 || idade >= 65) {
    strcpy(resultado,"Aposentadoria Aprovada.");
}
else {
    strcpy(resultado,"Aposentadoria Negada.");
}
 
 system("cls || clear");

 printf("Nome: %s \n",nome);
 printf("Idade: %d anos\n",idade);
 printf("Tempo de trabalho: %d anos\n",tempotrabalho);
 printf("Resultado: %s \n",resultado);
    
    
    return 0;
}