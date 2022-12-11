/*1. Escreva um algoritmo, em fluxograma ou pseudocódigo, que leia uma sequência de
números inteiros positivos até que o usuário digite 0 ou um valor negativo. Então, o devese
mostrar o menor e o maior valor válido da sequência.*/

programa
{
	
	funcao inicio()
	{
		inteiro nmr= 1, maiornmr=0, menornmr=0
		enquanto(nmr>0){
			leia(nmr)
			se(menornmr==0)
			{
				maiornmr=nmr
				menornmr=nmr
			}
			se(nmr>maiornmr)
			{
				maiornmr=nmr
				}senao se(nmr<menornmr){
					menornmr=nmr
					}
					}se(maiornmr>0){
			}
			escreva(" Menor valor: ", menornmr) 
			escreva( "\n Maior valor:",maiornmr)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 425; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */