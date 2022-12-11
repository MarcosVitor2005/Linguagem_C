/*6. Crie um algoritmo chamado selectionFind baseado no Selection Sort para que,
em vez de ordenar uma sequência de números inteiros, ele nos retorne o k-ésimo menor
elemento dessa sequência. Por exemplo: Suponha que os elementos S = 7, 1, 3, 10, 17, 2,
21, 9 estejam armazenados nessa ordem em um vetor e que desejamos obter o quinto maior
elemento dessa sequência. Então, uma chamada como selectFind(S,0,7,5), deverá retornar
o número 9, onde S é o nome do vetor, 0 e 7 são, respectivamente, o menor e o maior índice
do vetor e 5 indica que desejamos o quinto menor elemento. Obs.: Você não deve ordenar
a sequência e depois tomar o k-ésimo elemento.K é um valor informado pelo usuário.*/

#include <stdio.h>
#define m 8
int selectSort(int *vetor, int k) {
    int aux, t;
    int i,j;
    for(j = 0; j < m-1; j++){
            aux = j;
        for (i = j+1; i < m; i++) {
            if (vetor[i] < vetor[aux]){
                    aux = i;
            }
        }
        if (aux != j) {
            t = vetor[j];
            vetor[j] = vetor[aux];
            vetor[aux] = t;
        }
        if (j == k) {
                return vetor[j];
        }
    }
}
int main() {
	int K, vetor[m];
	int i;
	for (i = 0; i < m; ++i) {
		printf("[%d]= ", i+1);
		scanf("%d", &vetor[i]);
	}
        printf("K: ");
        scanf("%d", &K);
    for (i = 0; i < m; i++) {
        printf("[%d] ", vetor[i]);
    }
    printf("\n");
    printf("%d o menor valor: %d", K, selectSort(vetor, K));
    return (0);
}
