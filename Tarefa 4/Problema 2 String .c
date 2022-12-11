/*Problema 2: String
Faça um programa que solicite a digitação do nome completo do aluno e de 5 notas do mesmo
e calcule a média das notas. Caso a média seja maior que 5, imprima uma mensagem contendo
o nome do aluno e a palavra “Aprovado”. Caso contrário, a mensagem deve conter o nome
do aluno e a palavra “Reprovado”.*/

#include <stdio.h>

int main(){

	float notas[5],media;
	int i;
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
