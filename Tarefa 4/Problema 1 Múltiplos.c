/*Problema 1: Múltiplos
Faça um programa que solicite a digitação de 100 números inteiros e os armazene
em um vetor. Depois o programa deve ler o vetor e imprimir na tela uma listagem dos
múltiplos de 2, uma outra dos múltiplos de 3 e uma última listagem dos múltiplos de 5.*/

#include <stdio.h>

int main(){

    int Nm[5];
    int i;


    printf("Digite 100 Numeros: ");

    for(i = 0; i < 5; i++){
        scanf("%d", &Nm[i]);
    }

    printf("\nMultiplos De 2:\n");
    for(i = 0; i < 5; i++){
        if(Nm[i] %2 == 0){
            printf("%d ",Nm[i]);
        }
    }

    printf("\n Multiplos De 3:\n");
    for(i = 0; i < 5; i++){
        if(Nm[i] %3 == 0){
            printf("%d ",Nm[i]);
        }
    }

    printf("\n Multiplos De 5:\n");
    for(i = 0; i < 5; i++){
        if(Nm[i] %5 == 0){
            printf("%d ",Nm[i]);
        }
    }

    return 0;
}
