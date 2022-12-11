#include <stdio.h>

int main(){

    int n,i;
    int a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i = 2;i < n; i++){
        if(a[i-2]>a[i-1] && a[i]>a[i-1]){
            printf("S\n");
            return 0;
        }
    }
            printf("N\n");


    return 0;
}
