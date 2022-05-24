/*
 * Questão 2: 
 * Faça um programa que calcule a quantidade de latas de tinta necessária para
 * pintar um aposento. O programa deve receber como entradas as dimensões desse aposento
 * (largura e comprimento). Considere que:
 *      a. O aposento tem paredes perpendiculares;
 *      b. O pé-direito (altura do piso ao teto) do aposento mede 2,80 m;
 *      c. Deverão ser pintadas apenas as paredes;
 *      d. O aposento tem apenas uma porta (cuja área deve ser descontada), medindo 0,80 m
 *         de largura e 2,10 m de altura;
 *      e. Não é necessário descontar a área da janela;
 *      f. Cada lata de tinta tem 5 litros;
 *      g. Cada litro de tinta pinta aproximadamente 3 metros quadrados.
 */

#include <stdio.h>
#include <math.h>
int main()
{
	double largura, altura, peDireito, areaPorta;
	double areaASerPintada;
	int litrosTinta, numeroDeLatas;

	printf("Informe a largura e altura do aposento:\n");
	scanf("%lf %lf", &largura, &altura);

	peDireito = 2.8;
	areaPorta = 0.8 * 2.1;
	areaASerPintada = largura * peDireito * 2 + altura * peDireito * 2 - areaPorta;
	litrosTinta = ceil(areaASerPintada / 3.0);
	numeroDeLatas = ceil(litrosTinta / 5.0);

	printf("Sera necessario %d latas", numeroDeLatas);

	return 0;
}