/*5. Crie um programa que dado uma string somente de letras min�sculas, coloque
as letras dela em ordem crescente. Observa��o: a ordena��o de caracteres � igual a
ordena��o de n�mero; por exemplo, �a� � menor que �c�.*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

void bubbleSort(char txt[], int T){
   int i, j, aux;
   for (i = 0; i < T; i++){

      for (j = 0; j < T-1-i; j++){

         if(txt[j] > txt[j+1]){
            aux = txt[j];
            txt[j] = txt[j+1];
            txt[j+1] = aux;

         }
      }
   }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
   char txt[999999];

   printf("Digite um nome (somente de letras min�sculas): \n");
   scanf("%s",&txt);

   bubbleSort(txt, strlen(txt));
   printf("Ordenado em ordem crescente: \n %s", txt);
   return 0;
}
