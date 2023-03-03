#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    float a, b;
    printf("Insira um valor: ");
    scanf("%f", &a);
    b = a/2;
    if(a>20){
        printf("%f", b);
    }else{
        printf("Invalido.");
    }
    return 0;
    }