#include <stdio.h>
#define MAX 100

int main(int argc, char const *argv[])
{
    double X,aux;
    double N[MAX];

    scanf("%lf",&X);

    N[0] = X;

    for (int i = 0; i < MAX; i++){
        printf("N[%d] = %.4lf\n",i,N[i]);
        N[i+1] = (N[i]/2);
    }
    
    return 0;
}
