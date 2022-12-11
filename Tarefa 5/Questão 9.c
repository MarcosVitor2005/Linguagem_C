/*9. Houve um grande reajuste de salário na empresa que você trabalha. Todos
os funcionários receberam 5% de aumento caso ganhassem menos de R$ 3000, 2% com
um salário maior ou igual a R$3000 e menor que R$5000, e um decremento de 1% caso
ganhassem mais de R$5000. Crie um programa que receba N salários, calcule os reajustes
e, ao final, apresente todos do maior para o menor. Utilize o método de ordenação por
Seleção.*/

#include <stdio.h>

int Nsalarios;

void aplicarReaju(float v[]){
    int i;
	for(i = 0; i < Nsalarios; i++){
			 if(v[i] < 3000.0){
                    v[i] += 5.0/100.0*v[i];
			 }else if(v[i] < 5000.0){
                    v[i] += 2.0/100.0*v[i];
		}
		else v[i] = v[i]-(1.0/100.0*v[i]);
	}
}
void selectionSort(float v[]){
    int i,j,aux;
    int comAux;
	for(i = 0; i < Nsalarios-1; i ++){
            comAux = i;
		for(j = i+1; j < Nsalarios; j ++){
			if(v[j] < v[comAux]){
				comAux = j;
			}
		}
		if(comAux != i){
			aux = v[i];
			v[i] = v[comAux];
			v[comAux] = aux;
		}
	}
}
int main(){
    //quantidade de salarios
	printf("%s\n", "Quantos salarios?");
	scanf("%d", &Nsalarios);

	float salarios[Nsalarios];

    //atribuir valores
	printf("Valores: \n");
	int i;
	for(i = 0; i < Nsalarios; i ++){
		scanf("%f", &salarios[i]);
	}

	aplicarReaju(salarios);

	selectionSort(salarios);

    //saida reajustada
	printf("--> Salarios Reajustados: \n");
	for(i = 0; i < Nsalarios; i ++){
		printf("[%.2f] ", salarios[i]);
	}
	printf("\n");
	return 0;
}

