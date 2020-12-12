/* 4.4 Escreva um programa que pergunte o salário do funcionário e calcule o valor 
do aumento. Para salário superiores a R$ 1.250,00 calcule um aumento de 10%. Para 
os inferiores ou iguais, de 15%. */

#include <stdio.h>
int main(){
    float salario, aumento, salario_final;
    printf("Digite o valor do salário: R$ ");
    scanf("%f", &salario);

    if(salario > 1250){
        aumento = salario * 0.1;
    }

    else{
        aumento = salario * 0.15;
    }

    salario_final = salario + aumento;
    printf("O seu salário com aumento será: R$ %.2f\n", salario_final);

    getchar();
    return 0;
}