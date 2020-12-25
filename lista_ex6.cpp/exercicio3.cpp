/* 3. Criar 3 vetores com 10 posições, preencha com números os 2 primeiros, a seguir,
some os valores nas respectivas posições e armazene no 3o vetor. */


//Refazer

#include <stdio.h>
int main(){
    int TAMANHO_DO_VETOR = 2;
    int vetor1[TAMANHO_DO_VETOR],vetor2[TAMANHO_DO_VETOR],vetor3[TAMANHO_DO_VETOR];

    for(int i = 0; i < TAMANHO_DO_VETOR; i++){
        printf("Entre com os elementos do primeiro vetor: ");
        scanf("%d",&vetor1[i]);
    }

    printf("\n");

    for(int i = 0; i < TAMANHO_DO_VETOR; i++){
        printf("Entre com os elementos do segundo vetor: ");
        scanf("%d",&vetor2[i]);
    }

    for(int i = 0; i < TAMANHO_DO_VETOR; i++){
        vetor3[i] = vetor1[i] + vetor2[i];
        printf("RESULTADO DA SOMA: %d", vetor3[i]);
    }

    getchar ();
    return 0;
}

