
#include<stdlib.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");
int i, p;
float nota, media, total;
total=0;

printf("Digite as notas da AV1, AV2 e AVD: (Utilize ponto ao env�s de virgula)\n");
for(i=1 ; i <=3 ; i++){
	scanf("%f", &nota);
	total = total + nota;
}

printf("\nAgora, digite as notas do Avaliando Aprendizado: (Utilize ponto ao env�s de virgula)\n");
for(p=1 ; p <=2; p++){
	scanf("%f", &nota);
	total = total + nota;
}

media = total/3;

if(media<6){
	printf("%.2f est� ABAIXO do m�nimo. Fa�a testes recuperativos e/ou compensativos para melhorar sua m�dia!", media);
}else if(media >=6 && media<=8.5){
	printf("Sua m�dia � %.2f. Voc� passou, mas fa�a testes recuperativos e/ou compensativos para melhorar sua m�dia!", media);
}else{
	printf("Parab�ns! Sua m�dia est� impec�vel! %.2f � mais que necess�rio!", media);
}
}

