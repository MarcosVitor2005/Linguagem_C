/*Problema 0: Busca em vetor
Faça um programa que solicite a digitação e armazene 20 números reais em um vetor.
Depois o programa deve ficar disponível para o usuário digitar o valor do índice para que seja
exibido o número armazenado no índice solicitado. Para encerrar o programa, o usuário deve
informar um índice inválido (lembre-se de que para um vetor de 20 posições os índices válidos
são de 0 a 19).*/

#include <stdio.h>

int main(){
    float vet[20];
    int i,indice;


    for(i = 0; i < 20; i++){
        scanf("%f", &vet[i]);
    }
    scanf("%d", &indice);

    while(indice > -3 && indice < 20){// Para encerrar o programa, o usuário deve digitar "-3 ou 20".
        printf("%f\n", vet[indice]);
        	scanf("%d", &indice);

    }
    return 0;

}
