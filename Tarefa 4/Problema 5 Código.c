/*Gabriel inventou um c�digo para representar n�meros naturais, usando uma
sequ�ncia de zeros e uns. Funciona assim, o n�mero natural � representado pela quantidade
de vezes que o padr�o "100" aparece na sequ�ncia. Por exemplo, na sequ�ncia
11101001010011110, o padr�o aparece duas vezes; e na sequ�ncia
11101010111110111010101 ele n�o aparece nenhuma vez. Voc� deve ajudar Gabriel e
implementar um programa que, dada a sequ�ncia de zeros e uns, calcule quantas vezes o
padr�o "100" aparece nela.
Entrada:
A primeira linha da entrada cont�m um inteiro N, o tamanho da sequ�ncia. A segunda
linha cont�m a sequ�ncia de N zeros e uns, isto �, uma string.
Sa�da:
Seu programa deve imprimir um inteiro, quantas vezes o padr�o "100" aparece na*/

#include <stdio.h>
int main(){

    int N = 0,val = 0;
    int i;
    scanf("%d", &N);

    char nmr[N];
    scanf("%s", nmr);

    for(i = 0; i < (N - 2); i++){
        if(nmr[i] == '1' && nmr[i+1] == '0' && nmr[i+2] == '0'){
            val++;
        }
    }

    printf("%d", val);
	return 0;
}
