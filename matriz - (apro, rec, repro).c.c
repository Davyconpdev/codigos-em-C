#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define n 3
#define c 2

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i = 0, j = 0;
    float notas[n][c];
    float soma = 0, media[n];
    char disciplina[n][100];

for (i = 0; i < n; i++)
{
    printf("\ninforme a disciplina: ");
    gets(disciplina[i]);

    for (j = 0; j < c; j++)
    {
    printf("informe a %dª nota:",j+1);
    scanf("%f",&notas[i][j]);

    soma += notas[i][j];
    }
    media[i] = soma / c;
    soma = 0;
    fflush(stdin); 
}
system("cls");

for (i = 0; i < n; i++)
{
    printf("\n\nDisciplina: %s\n", disciplina[i]);

    for (j = 0; j < c; j++)
    {
        printf("%dª nota: %.1f\n",j+1, notas[i][j]);
    }
        printf("Media: %.1f\n", media[i]);
    
    if(media[i] >= 7)
    {
    printf("\nAPROVADO!"); 
    printf("\n");
    } 
    if(media[i] >= 5 && media[i] < 7)
    {
    printf("\nRECUPERAÇÃO.");
    printf("\n");
    } else if(media[i] < 5) {
     printf("\nREPROVADO.");
    printf("\n");
    } 
}
return 0;
}