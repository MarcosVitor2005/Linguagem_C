#include <stdio.h>

int main(){
    int N,X,Y,aux = 1;

    scanf("%d",&N);
    for (int i = 0; i < N; i++){
        scanf("%d %d",&X,&Y);

        for (int j = X; j <= aux; j++){
            if(j %2 != 0){
                printf("%d",j);
                aux++;
            }
        }
                
    }
    
    
    return 0;
}
