#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>


int main()
{
    setlocale(LC_ALL, "portuguese");

    char sexo;
    float altura;
    float pesoideal;

    printf("digite seu sexo:");
    scanf("%c", &sexo);

    printf("sua altura:");
    scanf("%f", &altura);

    sexo = toupper (sexo);

    switch (sexo)
    {
    case 'M':
        pesoideal = (72.7 * altura) - 58;
        {
            printf("Seu peso ideal È: %.2f \n", pesoideal);
        }
        break;

    case 'F':
        pesoideal = (62.1 * altura) - 44.7;
        {
            printf("Seu peso ideal È: %.2f \n", pesoideal);
        }
        break;

    default:
        printf("op√ß√£o inv√°lida.");
        break;
    }

    return 0;
}
