#include <stdio.h>

int main()
{
    int N=0,T,aux=0,sm=0;

    scanf("%d",&N);

    int m[N];

    for (int i = 0; i < N; i++){
        scanf("%d",&m[i]);
    }
    sm = m[0];
    for (int i = 0; i < N-1; i++)
    {
        sm -= m[i+1];
    }
    printf("%d",(sm-N)*-1);
    

    return 0;
}
