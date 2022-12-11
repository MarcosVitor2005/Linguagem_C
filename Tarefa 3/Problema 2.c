#include <stdio.h>

int main(){

	float notas[5],media;
	int i,soma;
	char nome[50]= {' '};

        printf("Digite Seu Nome Completo:\n");
        gets(nome);

	for(i=0; i < 5; i++){
        scanf("%f", &notas[i]);

	}
        media = notas[0] + notas[1] + notas[2] + notas[3] + notas[4];

        media = media /5;


        if(media > 5){
            printf("%s Aprovado", nome);

        }else{
            printf("%s Reprovado", nome);

        }


	return 0;
}
