/* 4.5 Execute o Programa 4.4 e experimente alguns valores. Verifique se os resultados 
foram os mesmos do Programa 4.2.*/

#include <stdio.h>
int main(){
    float salario, aumento, salario_final;
    printf("Digite o valor do salário: R$ ");
    scanf("%f", &salario);

    if(salario > 1500){
        aumento = salario * 0.15;
    }

    else{
        aumento = salario * 0.25;
    }

    salario_final = salario + aumento;
    printf("O seu salário com aumento será: R$ %.2f\n", salario_final);

    getchar();
    return 0;
}