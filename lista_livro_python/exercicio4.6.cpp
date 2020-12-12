/* 4.6 Escreva um programa que pergunte a distância que um passageiro deseja percorrer
em km. Calcule o preço da passagem, cobrando R$ 0,50 por km para viagens de até 200 km,
e R$ 0,45 para viagens mais longas.*/

#include <stdio.h>
int main(){
    float distancia, preco_passagem;
    printf("Digite a distância que irá percorrer em km: ");
    scanf("%f", &distancia);

    if(distancia <= 200){
        preco_passagem = distancia * 0.50;
    }

    else{
        preco_passagem = distancia * 0.45;
    }

    printf("O preço da passagem será: %.2f\n", preco_passagem);
    
    getchar();
    return 0;
}