/* 4.8 Escreva um programa que leia dois números e que pergunte qual operação você 
deseja realizar. Você deve poder calcular soma, subtração, multiplicação e divisão. 
Exiba o resultado da operação solicitada.*/

#include <stdio.h>
int main(){
    float n1, n2, opcao, soma, subtracao, multiplicacao, divisao;
    printf("Digite um número: ");
    scanf("%f", &n1);
    printf("Digite outro número: ");
    scanf("%f", &n2);
    printf("Escolha as seguintes opções: \n1. Soma; \n2.Subtração, \n3.Multiplicação, \n4.Divisão");
    scanf("%f", &opcao);

    if(opcao == '1'){
        soma = n1 + n2;
        printf("O resultado do cálculo é: %d\n", soma);
    }

    else if(opcao == '2'){
        subtracao = n1 - n2;
        printf("O resultado do cálculo é: %d\n", subtracao);
    }

    else if(opcao == '3'){
        multiplicacao = n1 * n2;
        printf("O resultado do cálculo é: %d\n", multiplicacao);
    }

    else if(opcao == '4'){
        divisao = n1 / n2;
        printf("O resultado do cálculo é: %d\n", divisao);
    }

    getchar();
    return 0;
}