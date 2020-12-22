/* 6. Faça um programa que carregue um vetor de dez números. Calcule e mostre um vetor
resultante ordenado de maneira crescente. */


#include <stdio.h>
int main(){
    int TAMANHO_DO_VETOR = 10;
    int vetor[TAMANHO_DO_VETOR];

    for(int i = 0; i < TAMANHO_DO_VETOR; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < TAMANHO_DO_VETOR; i++){
        if(vetor[i]<vetor[i]== vetor[i]){
            printf("%d \n", vetor[i]);
        }
    }

    getchar ();
    return 0;
}