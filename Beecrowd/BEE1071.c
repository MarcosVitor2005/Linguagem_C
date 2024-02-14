#include <stdio.h>

int main() {
    int X;
    
    while (1) {
        scanf("%d", &X);
        
        if (X == 0) {
            break; // Encerra o programa se X for igual a 0
        }
        
        int soma = 0;
        int contador = 0;
        
        // Encontra os 5 pares consecutivos a partir de X
        while (contador < 5) {
            if (X % 2 == 0) {
                soma += X;
                contador++;
            }
            X++;
        }
        
        printf("%d\n", soma);
    }
    
    return 0;
}
