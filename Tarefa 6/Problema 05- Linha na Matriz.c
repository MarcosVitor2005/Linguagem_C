/*Neste problema voc� deve ler um n�mero, indicando uma linha da matriz na qual
uma opera��o deve ser realizada, um caractere mai�sculo, indicando a opera��o que ser�
realizada, e todos os elementos de uma matriz M[12][12]. Em seguida, calcule e mostre a soma
ou a m�dia dos elementos que est�o na �rea verde da matriz, conforme for o caso. A imagem
abaixo ilustra o caso da entrada do valor 2 para a linha da matriz, demonstrando os elementos
que dever�o ser considerados na opera��o.*/

#include <stdio.h>
#define TAM 12.0

int main(){

    double a = 0.0, M[12][12];
    char T[2];
    int C,i,j;

    scanf("%d", &C);
    scanf("%s", &T);

    for(i = 0; i <= 11; i++){
        for(j = 0; j <= 11; j++){
            scanf("%lf", &M[i][j]);
                if(i == C)
                    a += M[i][j];
        }
    }

                if(T[0] == 'S')
                    printf("%.1lf\n",a);

                else if(T[0] == 'M'){
                    a = a / TAM;
                    printf("%.1lf\n",a);
    }
    return 0;
}
