/*4. Implemente um c�digo em C, que utilize um vetor de 2000 elementos inteiros,
gerado com valores lidos pelo teclado. Escolha o algoritmo de ordena��o que quiser.*/
#include <stdio.h>
#define TAM 2000

void imprimir (int X[], int n) {
    int i;
    printf("(");
        for (i=0; i<n; i++)
        printf("%3d ", X[i]);
        printf(")\n");
}

void bubbleSort(int V[], int n) {
    int i, j, aux;
        for (i=0; i<n; i++){
        for (j=0; j<n-i-1; j++){
            if (V[j]>V[j+1]){
                aux = V[j];
                V[j] = V[j+1];
                V[j+1] = aux;
            }
        }
    }
}
int main(){
    int Y[TAM];
    int i;
    printf("Digite valores: \n");
        for(i = 0;i < TAM; i++){
            scanf("%d", &Y[i]);
  }
  imprimir(Y, TAM);
  bubbleSort(Y, TAM);
  imprimir(Y, TAM);
  }



