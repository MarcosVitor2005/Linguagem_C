/*0. Um produto comprado por um consumidor tem um preço composto pelo seu preço de
custo (preço que a loja paga para a fábrica) adicionado de um percentual de lucro para a
loja, além de um percentual de impostos que a loja deve pagar. Supondo que a
percentagem de lucro seja de 28% do preço de custo e que o os impostos sejam de 25%
sobre o preço de custo, escreva um programa em C que calcule o preço que um
consumidor deve pagar. O programa deve ler do usuário apenas o preço de custo do
produto.*/

#include <stdio.h>
int main()
{
  double preCu;

  scanf("%lf", &preCu);

  preCu = preCu * 0.10;

  printf("%lf", preCu);

  return 0;
}
