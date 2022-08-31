/*
* includes do sistema
*/

#include <stdio.h>

/*
* meus includes 
*/

#include "meuHeader.h"

/*
* prototipos
*/
char leOpcao(void);

int main(void) {
	char opcao;			// opcao selecionada
	float principal;	// valor inicial
	int nMeses;			// numero de meses
	float juros;		// taxa de juros
	float valorFinal;	// valor final
	float prestacao;	// prestacao

	do
	{
		opcao = leOpcao();
		switch (opcao)
		{
		case 'a':
		case 'A':
			// calcular o montante final usando montante inicial
			printf("Entre com o principal: \n");
			scanf("%f", &principal);
			printf("Entre com o numero de meses: \n");
			scanf("%d", &nMeses);
			printf("Entre com a taxa de juros: \n");
			scanf("%f", &juros);
			valorFinal = calculaValorFinalporPrincipal(principal, nMeses, juros);
			printf("O valor final: %.2f \n", valorFinal);
			break;
		case 'b':
		case 'B':
			// calcular o montante inicial usando montante final
			printf("Entre com o valorFinal: \n");
			scanf("%f", &valorFinal);
			printf("Entre com o numero de meses: \n");
			scanf("%d", &nMeses);
			printf("Entre com a taxa de juros: \n");
			scanf("%f", &juros);
			principal = calculaPrincipalporValorFinal(valorFinal, nMeses, juros);
			printf("O valor inicial: %.2f \n", principal);
			break;
		case 'c':
		case 'C':
			// calcular o prestacao usando montante inicial
			printf("Entre com o principal: \n");
			scanf("%f", &principal);
			printf("Entre com o numero de meses: \n");
			scanf("%d", &nMeses);
			printf("Entre com a taxa de juros: \n");
			scanf("%f", &juros);
			prestacao = calculaPrestacaoporPrincipal(principal, nMeses, juros);
			printf("O valor final: %.2f \n", prestacao);
			break;
		case 'd':
		case 'D':
			// calcular o montante final usando prestacao
			printf("Entre com a prestacap: \n");
			scanf("%f", &prestacao);
			printf("Entre com o numero de meses: \n");
			scanf("%d", &nMeses);
			printf("Entre com a taxa de juros: \n");
			scanf("%f", &juros);
			valorFinal = calculaValorFinalporPrestacao(prestacao, nMeses, juros);
			printf("O valor final: %.2f \n", valorFinal);
			break;
		case 'e':
		case 'E':
			printf("Volte logo!");
		default:
			printf("Opcao %d invalida\n", opcao);
			break;
		}


	} while (opcao != 'e' && opcao != 'E');

	return 0;
}

/*
* funcao leOpcao exibe um menu de opcoes para um usurairo e retorna a opcao seleicionada
*/

char leOpcao(void) {
	char op;
	printf("Entre com a opcao desjada: \n"
		"(A)S = P((1+i)^n)\n"
		"(B)P = S / ((1 + i) ^ n)\n"
		"(C)R = P(i(1 + i) ^ n) / (((1 + i) ^ n) - 1)\n"
		"(D)S = R(((1 + i) ^ n) - 1) / i)\n"
		"opcao: ");

	op = getc(stdin);

}