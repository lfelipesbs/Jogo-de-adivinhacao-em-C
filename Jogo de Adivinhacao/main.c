#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));

    printf("*************************************\n");
    printf("* Bem vindo ao jogo de adivinhação! *\n");
    printf("*************************************\n");

    int numerosecreto = (rand() % 100) + 1;
    int pontos = 200;
    int j = 6;
    
    printf("O numero secreto esta entre 1 e 100.\n");
    printf("Voce tem 5 tentativas!\n");

    for(int i=0; i<5; i++){
        int chute;

        printf("Tentativa %d:\n", i+1);
        printf("Qual o seu chute? ");
        scanf("%d", &chute);
        printf("\n");

        int npontos = abs(numerosecreto - chute);
        pontos = pontos - npontos;
        
        if(chute == numerosecreto){
            printf("PARABENS!!! VOCE GANHOU!\n");
            printf("Voce fez %d pontos\n",pontos*j);
            break;
        }else{
            if(i == 4){
                printf("Voce perdeu... Boa sorte na proxima vez\n");
                printf("Voce fez %d pontos\n",pontos);
                printf("O numero era: %d\n", numerosecreto);
            }
            else if(chute < numerosecreto){
                printf("O numero secreto tem um valor maior...\n");
            }else{
                printf("O numero secreto tem um valor menor...\n");
            }
        }
        j--;
    }
}