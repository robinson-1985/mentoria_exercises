/* 3.13. Escreva um programa que converta uma temperatura digitada em °C em °F. 
A fórmula para essa conversão é: F = 9 * 5 + 32 / 5.*/

#include <stdio.h>
int main() {
    float celsius, farenheit;
    printf("Digite a temperatura em °C: \n");
    scanf("%f", &celsius);

    farenheit = 9 * 5 + (celsius/5);
    printf("A temperatura convertida de °C para °F é: %.2f°F\n", farenheit);
    
    getchar();
    return 0;
}