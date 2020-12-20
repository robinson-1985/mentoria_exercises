// 1. Faça um programa que lê 10 notas e exiba quantas são maiores que 7.

#include<stdio.h>
int main(){
    int TAMANHO_DO_VETOR = 5;
    int vetor[TAMANHO_DO_VETOR];
    
    for(int i = 0; i < TAMANHO_DO_VETOR; i++){
        printf("Digite uma nota: ");
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < TAMANHO_DO_VETOR; i++){
        if(vetor[i]>7){
            printf("Notas maiores que 7: %d \n", vetor[i]);
        }
    }

    getchar();
    return 0;
}