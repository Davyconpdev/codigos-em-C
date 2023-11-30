#include <stdio.h>
#include <locale.h>

#define tam 100
#define n 5

struct dados_pessoais 
{
    char nome[tam];
    char nascimento[tam];
    char rg[tam];
    char cpf[tam];
};

int main() {
setlocale(LC_ALL,"portuguese");

struct dados_pessoais pessoal[n];
int i = 0;

for (i = 0; i < n; i++)
{
printf("\nSolicitando dados do usuário.\n");
printf("Nome:");
gets(pessoal[i].nome);
fflush(stdin);

printf("Data de nascimento:");
gets(pessoal[i].nascimento);
fflush(stdin);

printf("RG:");
gets(pessoal[i].rg);
fflush(stdin);

printf("CPF:");
gets(pessoal[i].cpf);
fflush(stdin);
system("cls || clear");
}
system("cls || clear");

for (i = 0; i < n; i++)
{
   printf("\nNome: %s\n",pessoal[i].nome); 
   printf("Data de nascimento: %s\n",pessoal[i].nascimento); 
   printf("RG: %s\n",pessoal[i].rg); 
   printf("CPF: %s\n",pessoal[i].cpf); 
}

    return 0;
}