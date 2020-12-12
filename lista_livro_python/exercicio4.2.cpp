/* 4.2 Escreva um programa que pergunte  a velocidade do carro de um usuário. Caso
ultrapasse 80 km/h, exiba uma mensagem dizendo que o usuário foi multado. Nesse caso, 
exiba o valor da multa cobrando R$ 5 por km acima de 80 km/h.*/

#include<stdio.h>
int main(){
    float velocidade, excesso, multa;
    printf("Qual a velocidade do carro em km/h? \n");
    scanf("%f", &velocidade);

    if(velocidade>80){
        printf("Excesso de velocidade detectado! \n");
        excesso = velocidade - 80;
        multa = excesso * 5; 
        printf("Multa de: R$ %.2f \n", multa);
    }

    getchar();
    return 0;
}