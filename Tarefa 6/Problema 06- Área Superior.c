/*Leia um caractere mai�sculo, que indica uma opera��o que deve ser realizada e uma
matriz M[12][12]. Em seguida, calcule e mostre a soma ou a m�dia considerando somente
aqueles elementos que est�o na �rea superior da matriz, conforme ilustrado abaixo (�rea
verde).*/

#include <stdio.h>

int main() {
    int i,j,mai = 1,men = 10;
    char t;
    double m[12][12], a = 0;

    scanf("%c",&t);

    for (i = 0; i < 12; i++){
        for (j = 0;j < 12;j++){
            scanf("%lf", &m[i][j]);

            if (i < 5 && j >= mai && j <= men) {
                a += m[i][j];
            }
        }
        mai++;
        men--;
    }
            if (t=='M')
                a /= 30.0;
                printf("%.1lf\n", a);
    return 0;
}
