/* 3.15. Escreva um programa para calcular a redução do tempo de vida de um fumante.
 Pergunte a quantidade de cigarros fumados por dia e quantos anos ele já fumou. 
 Considere que um fumante perde 10 minutos de vida a cada cigarro e calcule quantos 
 dias de vida um fumante perderá. Exiba o total em dias.*/

#include<stdio.h>
int main(){
    int total_cigarros, quantidade_cigarros, anos_fumando, dias_perdidos;
    printf("Quantos cigarros você fuma diariamente? ");
    scanf("%d", &quantidade_cigarros);
    printf("Quantos anos você já fumou? ");
    scanf("%d", &anos_fumando);

    total_cigarros =  anos_fumando * quantidade_cigarros;    
    dias_perdidos = (total_cigarros * 10)/24;

    printf("Dias perdidos: %d \n", dias_perdidos); 

    getchar();
    return 0;
}