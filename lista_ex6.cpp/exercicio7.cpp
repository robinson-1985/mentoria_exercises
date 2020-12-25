/* 7. Faça um programa que leia um vetor de 15 posições de números inteiros. Exibe 
quantos e quais destes números são primos. */

#include <stdio.h>
int main(){
    int TAMANHO_DO_VETOR = 15;
    int vetor[TAMANHO_DO_VETOR];

    for(int i = 0; i < TAMANHO_DO_VETOR; i++){
        printf("Digite um valor inteiro: ");
        scanf("%d", &vetor[i]);
    }

    printf("\n \n");

    for(int i = 0; i < TAMANHO_DO_VETOR; i++){
        if(vetor[i] % 2 == 0){
        printf("Esse é um número primo: %d\n", vetor[i]);
        }
    }

    getchar ();
    return 0;
}