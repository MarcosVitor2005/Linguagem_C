#include <stdio.h>
#include <string.h>
int main()
{
    int N=10,valor=1;
    //scanf("%d",&N);

    int vet[10];
    
    for (int i = 1; i <= N; i++){
        for (int j = i; j < 1; j++){
            vet[i] = valor;
            valor = j+i;
            printf("%d\n",vet[i]);
        }
        
    }

    
    return 0;
}
