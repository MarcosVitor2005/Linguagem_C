/* Questão 4: 
 * Escreva um programa em C que calcule a distância entre dois pontos, a e b, 
 * percorrida — em metros — por um objeto em queda livre, considerando a gravidade igual a 

 * 10. Seu programa deve ler a velocidade o objeto, em metros por segundo, no ponto a e no 

ponto b.
 */
#include <stdio.h>
int main()
{
	double velA, velB, distanciaPercorrida;
	double gravidade = 10.0, aceleracao, t;
	printf("Informe a velocidade no ponto A\n");
	scanf("%lf", &velA);
	printf("Informe a velocidade no ponto B\n");
	scanf("%lf", &velB);

	aceleracao = gravidade;
	t = (velB - velA) / aceleracao;
	distanciaPercorrida = velA * t + 0.5 * aceleracao * t * t;

	printf("Distancia percorrida: %lf m", distanciaPercorrida);

	return 0;
}