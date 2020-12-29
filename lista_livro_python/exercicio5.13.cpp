/* 5.13 Escreva um programa que pergunte o valor inicial de uma dívida e o juro mensal. 
Pergunte também o valor mensal que será pago. Imprima o número de meses para que a 
dívida seja paga, o total pago e o total de juros pago. */

#include<stdio.h>
int main(){
    float valor_divida, juro_mensal, valor_mensal;
    printf("Digite o valor inicial da dívida: R$");
    scanf("%f", &valor_divida);
    printf("Digite o valor do juro mensal: ");
    scanf("%f", &juro_mensal);
    printf("Digite o valor mensal que será pago: R$");
    scanf("%f", &valor_mensal);

    



    getchar();
    return 0;
}