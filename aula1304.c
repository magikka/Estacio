#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int num;

    printf("Digite um valor: ");
    scanf("%d",&num);

    if(num >= 20 && num <= 90){ //se for verdadeira
        printf("%d est� entre 20 e 90.", num);

    }else{ //se for falso
        printf("%d n�o est� entre 20 e 90.", num);
    }
    return 0;
}