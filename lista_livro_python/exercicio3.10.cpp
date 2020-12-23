/* 3.10. Faça um programa que calcule o aumento de um salário. Ele deve solicitar o 
valor do salário e a porcentagem do aumento. Exiba o valor do aumento e do 
novo salário.*/

#include <stdio.h>
int main(){
    float salario, porcentagem_aumento, valor_aumento, novo_salario;
    printf("Digite o valor do seu salário: R$ ");
    scanf("%f", &salario);
    printf("Digite a porcentagem de aumento: ");
    scanf("%f", &porcentagem_aumento);

    valor_aumento = salario * (porcentagem_aumento / 100);
    printf("O valor do aumento do novo salário é: R$ %.2f\n", valor_aumento);

    novo_salario = salario + valor_aumento;
    printf("O valor do novo salário é: R$ %.2f\n", novo_salario);

    getchar();
    return 0;
}