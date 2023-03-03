#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int a, b, c;
    printf("Insira o valor de a: ");
    scanf("%d", &a);
    printf("Insira o valor de b: ");
    scanf("%d", &b);
    printf("Insira o valor de c: ");
    scanf("%d", &c);
    if(a < b && a < c){
        printf("O menor valor e %d", a);
    }else{
         if(b < a && b < c){
             printf("O menor valor e %d", b);
         }else{
             printf("O menor valor e %d", c);
         }
        
    }
    return 0; 
    }
