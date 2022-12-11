/*Problema 0: Busca em vetor
Fa�a um programa que solicite a digita��o e armazene 20 n�meros reais em um vetor.
Depois o programa deve ficar dispon�vel para o usu�rio digitar o valor do �ndice para que seja
exibido o n�mero armazenado no �ndice solicitado. Para encerrar o programa, o usu�rio deve
informar um �ndice inv�lido (lembre-se de que para um vetor de 20 posi��es os �ndices v�lidos
s�o de 0 a 19).*/

#include <stdio.h>

int main(){
    float vet[20];
    int i,indice;


    for(i = 0; i < 20; i++){
        scanf("%f", &vet[i]);
    }
    scanf("%d", &indice);

    while(indice > -3 && indice < 20){// Para encerrar o programa, o usu�rio deve digitar "-3 ou 20".
        printf("%f\n", vet[indice]);
        	scanf("%d", &indice);

    }
    return 0;

}
