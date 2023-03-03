#include<stdio.h>
#include<string.h>
#include<locale.h>
int main(){
	char jogador_1[4], jogador_2[4];
	int i, x, y, z;
	setlocale(LC_ALL, "portuguese");
	
	for(i=0; i<4; i++){
		printf("Digite a %d� letra: ", i+1);
		scanf("%c", &jogador_1[i]);
		scanf("%c");
		while(jogador_1[i] != 'a' && jogador_1[i] != 'b' && jogador_1[i] != 'c' && jogador_1[i] != 'd' && jogador_1[i] != 'e' && jogador_1[i] != 'f'){
			printf("Caractere inv�lido. Digite novamente.");
			printf("\nDigite a %d� letra: ", i+1);
			scanf("%c", &jogador_1[i]);
			scanf("%c");
		}
		while(jogador_1[1] == jogador_1[0]){
			printf("Caractere repetido. Digite novamente.");
			printf("\nDigite a %d� letra: ", i+1);
			scanf("%c", &jogador_1[i]);
			scanf("%c");
		}
		while(jogador_1[i] != 'a' && jogador_1[i] != 'b' && jogador_1[i] != 'c' && jogador_1[i] != 'd' && jogador_1[i] != 'e' && jogador_1[i] != 'f'){
			printf("Caractere inv�lido. Digite novamente.");
			printf("\nDigite a %d� letra: ", i+1);
			scanf("%c", &jogador_1[i]);
			scanf("%c");
		}
		while(i == 2 && jogador_1[2] == jogador_1[1] || i == 2 && jogador_1[2] == jogador_1[0]){
			printf("Caractere repetido. Digite novamente.");
			printf("\nDigite a %d� letra: ", i+1);
			scanf("%c", &jogador_1[i]);
			scanf("%c");
		}
		while(jogador_1[i] != 'a' && jogador_1[i] != 'b' && jogador_1[i] != 'c' && jogador_1[i] != 'd' && jogador_1[i] != 'e' && jogador_1[i] != 'f'){
			printf("Caractere inv�lido. Digite novamente.");
			printf("\nDigite a %d� letra: ", i+1);
			scanf("%c", &jogador_1[i]);
			scanf("%c");
		}
		while(i == 3 && jogador_1[3] == jogador_1[2] || i == 3 && jogador_1[3] == jogador_1[1] || i == 3 &&  jogador_1[3] == jogador_1[0]){
			printf("Caractere repetido. Digite novamente.");
			printf("\nDigite a %d� letra: ", i+1);
			scanf("%c", &jogador_1[i]);
			scanf("%c");
		}
		while(jogador_1[i] != 'a' && jogador_1[i] != 'b' && jogador_1[i] != 'c' && jogador_1[i] != 'd' && jogador_1[i] != 'e' && jogador_1[i] != 'f'){
			printf("Caractere inv�lido. Digite novamente.");
			printf("\nDigite a %d� letra: ", i+1);
			scanf("%c", &jogador_1[i]);
			scanf("%c");
		}
	}
	
	system("cls");
	
	printf("Jogador 2, agora � a sua vez. Tente descobrir a senha do jogador 1. Voc� tem 10 tentativas. Boa sorte!\n\n");
	for(x=0; x<10; x++){
		for(x=0; x<4; x++){
			printf("Digite a %d� letra: ", x+1);
			scanf("%c", &jogador_2[x]);
			scanf("%c");
			while(jogador_2[x] != 'a' && jogador_2[x] != 'b' && jogador_2[x] != 'c' && jogador_2[x] != 'd' && jogador_2[x] != 'e' && jogador_2[x] != 'f'){
				printf("Caractere inv�lido. Digite novamente.");
				printf("\nDigite a %d� letra: ", x+1);
				scanf("%c", &jogador_2[x]);
				scanf("%c");
			}
			while(jogador_2[1] == jogador_2[0]){
				printf("Caractere repetido. Digite novamente.");
				printf("\nDigite a %d� letra: ", x+1);
				scanf("%c", &jogador_2[x]);
				scanf("%c");
			}
			while(jogador_2[x] != 'a' && jogador_2[x] != 'b' && jogador_2[x] != 'c' && jogador_2[x] != 'd' && jogador_2[x] != 'e' && jogador_2[x] != 'f'){
				printf("Caractere inv�lido. Digite novamente.");
				printf("\nDigite a %d� letra: ", x+1);
				scanf("%c", &jogador_2[x]);
				scanf("%c");
			}
			while(x == 2 && jogador_2[2] == jogador_2[1] || x == 2 &&  jogador_2[2] == jogador_2[0]){
				printf("Caractere repetido. Digite novamente.");
				printf("\nDigite a %d� letra: ", x+1);
				scanf("%c", &jogador_2[x]);
				scanf("%c");
			}
			while(jogador_2[x] != 'a' && jogador_2[x] != 'b' && jogador_2[x] != 'c' && jogador_2[x] != 'd' && jogador_2[x] != 'e' && jogador_2[x] != 'f'){
				printf("Caractere inv�lido. Digite novamente.");
				printf("\nDigite a %d� letra: ", x+1);
				scanf("%c", &jogador_2[x]);
				scanf("%c");
			}
			while(x == 3 && jogador_2[3] == jogador_2[2] || x == 3 && jogador_2[3] == jogador_2[1] || x == 3 && jogador_2[3] == jogador_2[0]){
				printf("Caractere repetido. Digite novamente.");
				printf("\nDigite a %d� letra: ", x+1);
				scanf("%c", &jogador_2[x]);
				scanf("%c");
			}
			while(jogador_2[x] != 'a' && jogador_2[x] != 'b' && jogador_2[x] != 'c' && jogador_2[x] != 'd' && jogador_2[x] != 'e' && jogador_2[x] != 'f'){
				printf("Caractere inv�lido. Digite novamente.");
				printf("\nDigite a %d� letra: ", x+1);
				scanf("%c", &jogador_2[x]);
				scanf("%c");
			}
		}
		for(z=0;z<4;z++){
			if(jogador_1[z] == jogador_2[z]){
				printf("X");
				
				}else{
				printf("O");
			
			}
			printf("\n");
		}
		if(jogador_1[0] == jogador_2[0] && jogador_1[1] == jogador_2[1] && jogador_1[2] == jogador_2[2] && jogador_1[3] == jogador_2[3]){
			printf("Parab�ns, voc� venceu!");
			break;
		}
	}
	if(x == 10){
		printf("Acabou suas tentativas. Voc� perdeu :(");
	}
}
	