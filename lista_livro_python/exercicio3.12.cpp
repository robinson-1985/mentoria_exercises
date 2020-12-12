/* 3.12. Escreva um programa que calcule o tempo de uma viagem de carro. Pergunte a 
distância a percorrer e a velocidade média esperada para a viagem. */

#include <stdio.h>
int main(){
    float distancia, velocidade_media, tempo_viagem;
    printf("Qual a distância que vai percorrer em km: \n");
    scanf("%f", &distancia);
    printf("Qual será a sua velocidade média em km/h: \n");
    scanf("%f", &velocidade_media);

    tempo_viagem = distancia / velocidade_media;

    printf("O seu tempo de viagem será: %.2f horas\n", tempo_viagem);

    getchar();
    return 0;
}