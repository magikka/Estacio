#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "portuguese");
    float n1, n2, n3, n4, media, nmedia, ef;
    printf("Indique suas pontua��es. Nota AV1: ");
    scanf("%f", &n1);
    printf("Nota AV2: ");
    scanf("%f", &n2);
    printf("Nota AV3: ");
    scanf("%f", &n3);
    printf("Nota AV4: ");
    scanf("%f", &n4);

    media=(n1+n2+n3+n4)/4;

    if (media<3){ //se a m�dia for menor que 3, est� reprovado.
        printf("REPROVADO!");
    }else{
        if(media>=3 && media<=6) //se a m�dia for entre 3 e 5, pede exame final e a nova m�dia for maior igual a 5, aprova.
        {
            printf("Insira nota da Avalia��o FINAL: ");
            scanf("%f", ef);
            nmedia=(media+ef)/2;
            if(nmedia>=7) //se a m�dia for maior igual a 5 aprova.
            {
                printf("APROVADO!");
            }
            else{ //se n�o, reprovado.
                printf("REPROVADO.");
            }
        }
        else{
            printf("APROVADO");
        }
    }
}