#include <stdio.h>
#include <stdlib.h>
#define TAM 20

int main(){
    float vet[TAM];
    int i,indice;

    for(i = 0; i < TAM; i++){
        printf("Digite o valor do indice [%d]:",i);
        scanf("%f", &vet[i]);
    }
    printf("Digite o indice que voçe deseja ver: \n");
    scanf("%d", &indice);
    while(indice > -1 && indice < TAM){
        printf("%f\n",vet[indice]);
        printf("Digite o indice que voçe deseja ver: \n");
        scanf("%d", &indice);
    }

    return 0;
}
