/* 3.8. Escreva um programa que leia um valor em metros e o exiba convertidos
 em milímetros.*/

#include <stdio.h>
int main(){
    float metros, milimetros;
    printf("Digite um valor em metros: ");
    scanf("%f", &metros);

    milimetros = metros / 1000;

    printf("O valor em metros convertido para milimetros é: %f\n", milimetros);

    getchar();
    return 0;
}