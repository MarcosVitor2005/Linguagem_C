#include <stdio.h>
#define TAM 100

int main(){

    int vet[TAM];
    int i;


    printf("Digite 100 Numeros: ");

    for(i = 0; i < TAM; i++){
        scanf("%d", &vet[i]);
    }

    printf("\vetultiplos De 2:\n");
    for(i = 0; i < TAM; i++){
        if(vet[i] %2 == 0){
            printf("%d ",vet[i]);
        }
    }

    printf("\n Multiplos De 3:\n");
    for(i = 0; i < TAM; i++){
        if(vet[i] %3 == 0){
            printf("%d ",vet[i]);
        }
    }

    printf("\n Multiplos De 5:\n");
    for(i = 0; i < TAM; i++){
        if(vet[i] %5 == 0){
            printf("%d ",vet[i]);
        }
    }

    return 0;
}
