#include <stdio.h>

int main()
{
    int N;
    int maior;
    while (scanf("%d", &N) != EOF)
    {
        int vet[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &vet[i]);
        }
        maior = vet[0];
        for (int j = 0; j < N; j++)
        {
            if (vet[j] >= maior)
            {
                maior = vet[j];
            }
        }
        if (maior < 10)
        {
            printf("1\n");
        }
        else if (maior >= 10 && maior < 20)
        {
            printf("2\n");
        }
        else if (maior >= 20)
        {
            printf("3\n");
        }
    }
    return 0;
}
