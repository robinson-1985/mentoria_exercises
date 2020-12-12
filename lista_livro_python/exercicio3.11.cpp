/* Faça um programa que solicite o preço de uma mercadoria e o percentual 
de desconto. Exiba o valor do desconto e o preço a pagar. */

#include <stdio.h>
int main(){
    float preco_mercadoria, percentual_desconto, valor_desconto, preco_final;
    printf("Digite o preço da mercadoria:\nR$");
    scanf("%f", &preco_mercadoria);
    printf("Digite o percentual de desconto:\n");
    scanf("%f", &percentual_desconto);

    valor_desconto = preco_mercadoria * (percentual_desconto / 100);
    printf("O valor de desconto será: R$ %.2f\n", valor_desconto);

    preco_final = preco_mercadoria - valor_desconto;
    printf("O preço a pagar da mercadoria é: R$ %.2f\n", preco_final);

    getchar();
    return 0;
}