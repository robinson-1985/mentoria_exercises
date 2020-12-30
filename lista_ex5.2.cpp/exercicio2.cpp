/* 2. Escreva um programa que exiba na tela a quantidade de números ímpares
existentes entre dois números que o usuário digitar (testar inclusive os números
digitados). */

/*Passo 1 - declare um número; ok
Passo 2 - declare outro número; ok
Passo 3 - Verifique se os números entre os intervalos (inclusive os números digitados)se são ímpares; ok
Passo 4 - Armazenar os números ímpares por demanda; ok
Passo 5 - Resultado final: Imprimir os números ímpares */

#include <stdio.h>
int main(){
    int numero1, numero2;
    printf("Informe o primeiro número: ");
    scanf("%d", &numero1);
    printf("Informe o segundo número: ");
    scanf("%d", &numero2);
    
    int TAMANHO_DO_VETOR = numero2 - numero1;
    int vetor[TAMANHO_DO_VETOR]; // vetor de tamanho arbitrário;
    
    int i = 0;

    for(int odd = numero1; odd <= numero2; odd++){
        if(odd % 2 != 0){
            vetor[i] = odd;
            i++;
        }
    }

    for(int x = 0 ; x < i; x++){
        printf("Número ímpar: %d\n", vetor[x]);
    }
    
    getchar();
    return 0;
}
