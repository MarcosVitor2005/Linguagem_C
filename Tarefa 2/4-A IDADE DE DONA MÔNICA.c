#include <stdio.h>
#include <math.h>

int main() {
    int m, a, b,calculo,res;
    scanf("%d %d %d",&m, &a, &b);

     calculo = m -(a+b);

    res = fmax(a,fmax(b,calculo));
    printf("%d\n",res);

    return 0;

}
