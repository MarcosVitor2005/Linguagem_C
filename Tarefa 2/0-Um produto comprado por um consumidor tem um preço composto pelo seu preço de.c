/*0. Um produto comprado por um consumidor tem um pre�o composto pelo seu pre�o de
custo (pre�o que a loja paga para a f�brica) adicionado de um percentual de lucro para a
loja, al�m de um percentual de impostos que a loja deve pagar. Supondo que a
percentagem de lucro seja de 28% do pre�o de custo e que o os impostos sejam de 25%
sobre o pre�o de custo, escreva um programa em C que calcule o pre�o que um
consumidor deve pagar. O programa deve ler do usu�rio apenas o pre�o de custo do
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
