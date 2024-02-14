#include <stdio.h>
#define MAX 12

int main(int argc, char const *argv[])
{
    float M[MAX][MAX] = {0, 0};
    float soma,media;
    int c;
    char t[2];

    scanf("%d %c", &c);
    scanf("%s", &t);

        for (int i = 0; i < MAX; i++)
        {
            scanf("%f", &M[i][c]);
            soma = soma + M[i][c];
        }

        /*for (int i = 0; i < MAX; i++)
        {
            for (int j = 0; j < MAX; j++)
            {
                printf("%.1f ", M[i][j]);
            }
            printf("\n");
        }*/

        printf("\n\n");

        if (t[0] == 'S')
        {
            printf("\n%.1f\n", soma);
        }
        else if (t[0] == 'M')
        {
            media = soma / 12.0;
            printf("%.1f\n", media);
        }

    return 0;
}
