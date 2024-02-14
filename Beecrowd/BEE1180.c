#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, menor, posicao = 0;

    scanf("%d", &n);

    int x[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (x[i] <= x[i + 1])
        {
            menor = x[i];
            x[i + 1] = x[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (x[i] == menor)
        {
            posicao = i;
            break;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);

    return 0;
}
