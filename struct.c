#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 100

struct dados_aluno 
{
    char nome[tam];
    int idade;
    float peso;
    float altura;
};


int main() {
setlocale(LC_ALL,"portuguese");

struct dados_aluno aluno;

printf("\nSolicitando dados do aluno.\n");
printf("Nome:");
gets(aluno.nome);
fflush(stdin);
printf("Idade:");
scanf("%d",&aluno.idade);

printf("Peso:");
scanf("%f",&aluno.peso);

printf("Altura:");
scanf("%f",&aluno.altura);
system("cls || clear");

//imprimindo os dados.
printf("Nome: %s\n",aluno.nome);
printf("Idade: %d anos\n",aluno.idade);
printf("Peso: %.1f Kg\n",aluno.peso);
printf("Altura: %.2f metro(s)\n",aluno.altura);


 return 0;
}