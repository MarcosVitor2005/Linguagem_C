#include <stdio.h>
#include <math.h>
#define MAX 100

int main(int argc, char const *argv[])
{
    double A[MAX],X;

    for (int i = 0; i < MAX; i++)
    {
        scanf("%lf",&X);

        if (X <= 10)
        {
            printf("A[%d] = %.1lf\n",i,X);
        }
    }

    

    
    return 0;
}
