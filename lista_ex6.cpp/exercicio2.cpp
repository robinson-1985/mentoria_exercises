/* 2. Faça um programa que carregue um vetor com sete números inteiros, calcule e mostre:
• Os números múltiplos de 2
• Os números múltiplos de 3
• Os números múltiplos de 2 e 3 (ao mesmo tempo). */

#include <stdio.h>
int main(){
    int TAMANHO_DO_VETOR = 7;
    int vetor[TAMANHO_DO_VETOR];

    for(int i = 0; i < TAMANHO_DO_VETOR; i++){
        printf("Digite um número inteiro: ");
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < TAMANHO_DO_VETOR; i++){
        if(i%2==0){
            printf("Esses são os números múltiplos de 2: %d\n", vetor[i]);
        }
    }

    for(int i = 0; i < TAMANHO_DO_VETOR; i++){
        if(i%3==0){
            printf("Esses são os números múltiplos de 3: %d\n", vetor[i]);
        }
    }

    for(int i = 0; i < TAMANHO_DO_VETOR; i++){
     if(i%2==0 && i%3==0){
            printf("Esses são os números múltiplos de 2 e 3: %d\n", vetor[i]);
        }
    }    

    getchar ();
    return 0;
}