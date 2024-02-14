#include <stdio.h>

int main()
{
    int N[10],aux=0,X = 10,i;

    scanf("%d",&i);

    while (aux < X)
    {
        printf("N[%d] = %d\n",aux,i);
        i = i + i;
        aux++;
    }
    
    
    return 0;
}
