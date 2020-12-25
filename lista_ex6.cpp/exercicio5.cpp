/* 5. Faça um programa que carregue 1 vetor de 6 elementos numéricos inteiros; calcule e
imprima a quantidade de números pares e a quantidade de números impares. */

#include <stdio.h>
#include <math.h>
int main(){
    int TAMANHO_DO_VETOR = 6;
    int vetor[TAMANHO_DO_VETOR], soma_pares = 0, soma_impares = 0, i;

    for(int i = 0; i < TAMANHO_DO_VETOR; i++){
        printf("Declare os valores: ");
        scanf("%d",&vetor[i]);
            if (vetor[i] % 2 == 0){
                soma_pares += vetor[i];
            }
            else {
                soma_impares += vetor[i];
            }
    }

    printf("A soma dos números pares é: %d\n", soma_pares);
    printf("A soma dos números ímpares é: %d\n", soma_impares);

    getchar ();
    return 0;
}