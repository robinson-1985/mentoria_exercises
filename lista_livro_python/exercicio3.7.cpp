/* 3.7. Faça um programa que peça dois números inteiros. Imprima a soma desses dois
números na tela.*/

#include <stdio.h>
int main(){
    int numero1, numero2, soma;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;

    printf("A soma dos dois números é: %d\n", soma);

    getchar();
    return 0;
}