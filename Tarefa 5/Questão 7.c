/*7.Escreva um algoritmo em C que leia uma quantidade de alunos, após isso, leia
suas 4 notas, calcule a média de cada aluno e, enfim, apresente todas as notas da maior para
a menor.*/

#include <stdio.h>

int QuantAlunos;
int notasAlu[999999][4] = {{}};
float medias[999999] = {};

void valorNotasAlu(){
    int i,j;
    //Entrada
    printf("%s\n", "Digite a quantidade de alunos: ");
	scanf("%d", &QuantAlunos);
    //Atribuir notas
	for(i = 0; i < QuantAlunos; i ++){
		printf("%d aluno:\n", i+1);
		for(j = 0; j < 4; j ++){
			scanf("%d", &notasAlu[i][j]);
		}
	}
}
void bubbleSort(){
    int i,j, aux;
	for(i = QuantAlunos-1; i > 0; i --){
		for(j = 0; j < i; j ++){
			if(medias[j] < medias[j+1]){
                aux = medias[j+1];
				medias[j+1] = medias[j];
				medias[j] = aux;
			}
		}
	}
}
void imprimirMedias(){
    int i;
	for(i = 0; i < QuantAlunos; i ++){
		printf("--> %.2f\n", medias[i]);
	}
}

void saida(){
	int i,j;
	//calcular media
	for(i = 0; i < QuantAlunos; i ++){
		int soma = 0;
		for(j = 0; j < 4; j ++){
			soma += notasAlu[i][j];
		}
		medias[i] = soma/4.0;
	}
	bubbleSort();
	imprimirMedias();
}
int main(){

    valorNotasAlu();
	saida();

	return 0;
}




