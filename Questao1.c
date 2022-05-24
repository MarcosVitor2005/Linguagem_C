/*
 * Questão 1: Um hotel com 75 apartamentos deseja fazer uma promoção especial de final de
 * semana, concedendo um desconto de 25% na diária. Com isso, espera-se aumentar sua taxa
 * de ocupação de 50 para 80%. Sendo dado o valor normal da diária, calcule e imprima:
 *      a. O valor da diária proporcional;
 *      b. O valor total arrecadado com 80% de ocupação e diária proporcional;
 *      c. O valor total arrecadado com 50% de ocupação e diária normal;
 *      d. A diferença entre esses dois valores.
 */

#include <stdio.h>
#include <math.h>
int main()
{
	double diariaNormal, diariaProporcional;
	double valorArrecadado50Ocupacao;
	double valorArrecadado80Ocupacao;
	double diferencaArrecadacoes;
	double ocupacao;
	int quartos = 75;

	scanf("%lf", &diariaNormal);

	ocupacao = floor(quartos * 0.5);
	valorArrecadado50Ocupacao = diariaNormal * ocupacao;
	diariaProporcional = 0.75 * diariaNormal;
	ocupacao = floor(quartos * 0.8);
	valorArrecadado80Ocupacao = diariaProporcional * ocupacao;
	diferencaArrecadacoes = valorArrecadado80Ocupacao - valorArrecadado50Ocupacao;

	printf("\nDiaria com 25%% de desconto: R$ %.2lf\n", diariaProporcional);
	printf("Valor total arrecadado com 50%% de ocupação e diária normal: R$ %.2lf\n", valorArrecadado50Ocupacao);
	printf("Valor total arrecadado com 80%% de ocupação e diária proporcional: R$ %.2lf\n", valorArrecadado80Ocupacao);
	printf("Diferença entre esses dois valores: R$ %.2lf\n", diferencaArrecadacoes);

	return 0;
}