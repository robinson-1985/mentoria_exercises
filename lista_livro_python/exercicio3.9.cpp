/* 3.9. Escreva um programa que leia a quantidade de dias, horas, minutos e segundos 
do usuário. Calcule o total em segundos.*/

#include <stdio.h>
int main() {
    float dias, horas, minutos, segundos, total_segundos;
    printf("Digite uma quantidade de dias: ");
    scanf("%f", &dias);
    printf("Digite uma quantidade de horas: ");
    scanf("%f", &horas);
    printf("Digite uma quantidade de minutos: ");
    scanf("%f", &minutos);
    printf("Digite uma quantidade de segundos: ");
    scanf("%f", &segundos);

    total_segundos = (dias*24*60*60) + (horas*60*60) + (minutos*60) + segundos;

    printf("Total em segundos: %.2f", total_segundos);

    getchar();
    return 0;
}