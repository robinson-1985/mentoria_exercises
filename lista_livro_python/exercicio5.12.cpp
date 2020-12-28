/* 5.12 Altere o programa anterior de forma a perguntar também o valor depositado 
mensalmente. Esse valor será depositado no início de cada mês, e você deve considerá-lo 
para o cálculo de juros do mês seguinte.*/

#include<stdio.h>
int main() {
    float deposito_inicial, taxa_juros, total_ganho, valor_mensal;
    printf("Declare o valor do depósito: ");
    scanf("%f", &deposito_inicial);
    printf("Declare a taxa de juros da poupança: ");
    scanf("%f", &taxa_juros);
    printf("Declare o valor depositado por mês: ");
    scanf("%f", &valor_mensal);

    

    getchar();
    return 0;
}