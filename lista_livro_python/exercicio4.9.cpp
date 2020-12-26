/* 4.9 Escreva um programa para aprovar o empréstimo bancário para compra de casa. O
programa deve perguntar o valor da casa a comprar, o salario e a quantidade de anos a 
pagar. O valor da prestação mensal não pode ser superior a 30% do salário. Calcule o
valor da prestação como sendo o valor da casa a comprar dividido pelo número de meses
a pagar.*/

#include <stdio.h>
int main(){
    float valor_casa = 0, salario = 0, quantidade_anos, parcelas = 0, meses, minimo = 0;
    printf("Informe o valor da casa?: R$ ");
    scanf("%f", &valor_casa);
    printf("Informe o valor do seu salário: R$ ");
    scanf("%f", &salario);
    printf("Informe a quantidade de anos para pagar a casa: ");
    scanf("%f",&quantidade_anos);

    meses = quantidade_anos * 12;
    parcelas = valor_casa / meses;
    minimo = (salario / 100) * 30;


    if(parcelas < minimo){
        printf("O seu empréstimo foi aprovado! %f\n");
    }

    else{
         printf("O seu empréstimo não foi aprovado, porque excedeu 30 porcento do seu salário! \n");
    }
    
    getchar();
    return 0;
}