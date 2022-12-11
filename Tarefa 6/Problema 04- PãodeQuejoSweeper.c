#include <stdio.h>

int main(){

    int n, m, valor;
    int i, j;

    while (scanf("%d %d", &n, &m) != -1){
        int matriz[n][m];

        for (i = 0; i < n; i++){
            for (j = 0; j < m; j++) {
                scanf("%d", &matriz[i][j]);
            }
        }

        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                if (matriz[i][j])
                    printf("9");

                else{
                    valor = 0;
                    if(i)
                        valor += matriz[i-1][j];
                    if(j)
                        valor += matriz[i][j-1];
                    if(i != n-1)
                        valor += matriz[i+1][j];
                    if(j != m-1)
                        valor += matriz[i][j+1];
                            printf("%d", valor);
                }
            }
            printf("\n");
        }
    }

    return 0;
}
