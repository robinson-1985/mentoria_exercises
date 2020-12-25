/* 4. Criar 2 vetores com 8 elementos, preencher o primeiro com valores, a seguir
preencha o 2° com os valores do primeiro em ordem inversa. */

// Refazer

#include <stdio.h>
int main(){
    int TAMANHO_DO_VETOR = 2;
    int vetor[TAMANHO_DO_VETOR];

    for(int i = 0; i < TAMANHO_DO_VETOR; i++){
        printf("Elemento[%d]= ",i);
        scanf("%d",&vetor[i]);
    }

    printf("\n::: Valores originais :::\n");
    for(int i = 0;i < TAMANHO_DO_VETOR; i++){
        printf("%d\n",vetor[i]);
    }

    printf("\n::: Valores na ordem inversa :::\n");
    for(int i = 4;i >= 0; i--){
        printf("%d\n",vetor[i]);
    }
    

    getchar ();
    return 0;

}