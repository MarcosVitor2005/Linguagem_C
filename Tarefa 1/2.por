/*  Escreva um programa que, dada uma variável x com algum valor inteiro, temos um novo x de
acordo com a seguinte regra:
• se x é par, x = x / 2
• se x é ímpar, x = 3 * x + 1
• imprime x
• O programa deve parar quando x tiver o valor final de 1. Por exemplo, para x = 13, a saída
será: 40 -> 20 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1*/
programa
{
	
	funcao inicio()
	{
		inteiro num , x=0
		leia(num)
		enquanto(x != 1){
			se(num%2 == 0){
                x = num/2
			}senao{
				x = 3 * num + 1
			}
			escreva(x+",")
			num = x
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 533; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */