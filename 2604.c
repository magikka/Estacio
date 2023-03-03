#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int x, y;
    printf("Digite um valor acima de 99 e abaixo de 1000: ");
    scanf("%d", &x);
    y = x \ 100;
    if (y % 2 == 0){
        printf("O algarismo da casa das centenas é PAR!");
    }else{
        printf("O algarismo da casa das centenas é IMPAR!!");
    }
}