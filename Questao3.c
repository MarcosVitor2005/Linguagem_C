/*
 * Questão 3: 
 * Sabe-se que o quilowatt de energia custa um quinto do salário-mínimo. Faça um
 * programa que receba o valor do salário-mínimo e a quantidade de quilowatts consumida por
 * uma residência, calcule e mostre: o valor de cada quilowatt; o valor a ser pago por essa
 * residência e; o valor a ser pago com desconto de 15%.
 */
#include <stdio.h>
int main()
{
	double salarioMinimo, qConsumido, qValor, totalPagar, desconto;

	printf("Informe o salario-minimo: \nR$ ");
	scanf("%lf", &salarioMinimo);
	printf("Informe a quantidade de quilowatts consumida:\n");
	scanf("%lf", &qConsumido);

	qValor = salarioMinimo / 5.0;
	printf("\nValor de cada quilowatt: R$ %.2lf\n", qValor);
	totalPagar = qValor * qConsumido;
	printf("Valor a ser pago: R$ %.2lf\n", totalPagar);
	desconto = totalPagar * 0.15;
	totalPagar -= desconto;
	printf("Valor com desconto de 15%%: R$ %.2lf", totalPagar);

	return 0;
}