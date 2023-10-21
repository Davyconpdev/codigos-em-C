#include <stdio.h>
#include <stdio.h>
#include <locale.h>

int main() {
    
    setlocale(LC_ALL,"portuguese");

    int idade;
    
    printf("Insira sua idade:");
    scanf("%d",&idade);

    if (idade >= 18 && idade <= 65) {
        printf("VOTO OBRIGATORIO.");
    } else {
        printf("VOTO NAO OBRIGATORIO.");
    }

return 0;
}