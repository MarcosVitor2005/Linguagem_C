/*Faça um programa que calcule a quantidade de latas de tinta necessária para pintar um
aposento. O programa deve receber como entradas as dimensões desse aposento
(largura e comprimento). Considere que:
a. O aposento tem paredes perpendiculares;
b. O pé-direito (altura do piso ao teto) do aposento mede 2,80 m;
c. Deverão ser pintadas apenas as paredes;
d. O aposento tem apenas uma porta (cuja área deve ser descontada), medindo 0,80 m
de largura e 2,10 m de altura;
e. Não é necessário descontar a área da janela;
f. Cada lata de tinta tem 5 litros;
g. Cada litro de tinta pinta aproximadamente 3 metros quadrados.*/

#include <stdio.h>
int main(){
	float largura, comprimento, altura = 2.8;
	float areaP = 1.68, areaTotal;
	int latasN = 1;

	scanf("%f", &largura);
	scanf("%f", &comprimento);

	areaTotal = largura*altura*2;
	areaTotal += comprimento*altura*2-areaP;
	latasN = areaTotal/15;

	printf("\nLatas:%d\n", latasN);

	return 0;
}
