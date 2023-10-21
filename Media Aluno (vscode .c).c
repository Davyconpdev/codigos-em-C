#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"portuguese");

//declarar variáveis.
    int idade;
    float primeiranota;
    float segundanota;
    float terceiranota;
    char nome[30];
    float media;

//solicitando dados.
printf("Nome:");
scanf("%s",&nome);

printf("idade:");
scanf("%d",&idade);

printf("Digite a 1ª nota:");
scanf("%1f",&primeiranota);

printf("Digite a 2ª nota:");
scanf("%1f",&segundanota);

printf("Digite a 3ª nota:");
scanf("%1f",&terceiranota);

system("cls || clear");

//calculo média.
media = (primeiranota+segundanota+terceiranota) / 3;

//o que vai aparecer na interface.

if(media < 7) {
    printf("Reprovado.");
}
else {
    printf("Aprovado!\n");
}
printf("Nome: %s \n", nome);
printf("Sua Média: %.2f \n", media);

return 0;






}
