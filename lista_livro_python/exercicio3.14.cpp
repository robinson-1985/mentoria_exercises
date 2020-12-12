/* 3.14. Escreva um programa que pergunte a quantidade de km percorridos por um carro 
alugado pelo usuário, assim como a quantidade de dias pelos quais o carro foi alugado.
Calcule o preço a pagar, sabendo que o carro custa R$ 60,00 por dia e R$ 0,15 por km
rodado.*/

#include <stdio.h>
int main() {
    float km_percorridos, quantidade_dias, preco_pagar;
    printf("Digite a quantidade de km percorridos: \n");
    scanf("%f", &km_percorridos);
    printf("Digite a quantidade de dias do aluguel do carro: \n");
    scanf("%f", &quantidade_dias);

    preco_pagar = (60 * quantidade_dias) + (0.15 * km_percorridos);
    printf("O preço a pagar será: %.2f\n", preco_pagar);

    getchar();
    return 0;
}