#include <stdio.h>
#include <string.h>
#define TAM 26

int main(){
   int i,j;
   char cript[27];
   char abc[TAM]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
   char Tex[10001];

   gets(cript);
   gets(Tex);

   for ( i = 0; i < strlen(Tex); i++){
      for ( j = 0; j < TAM; j++){
         if(Tex[i] == cript[j]){
                printf("\n");
                for(int i = 0;i < 100; i++){
                    printf("%c ",Tex[i]);
                }
                printf("\n");
            Tex[i] = abc[j];

            j = 0;
         break;
         }
      }
   }
   printf("%s\n", Tex);
   return 0;
}
