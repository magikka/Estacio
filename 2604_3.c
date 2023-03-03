#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    float v1, v2, r, rf;
    printf("Digite um valor: ");
    scanf("%f", &v1);
    printf("Digite um valor: ");
    scanf("%f", &v2);
    r = v1 + v2;
    if (r >= 10){
        rf = r + 5;
        printf("%f", rf);
    }else{
        rf = r - 7;
        printf("%f", rf); 
    }
}
