#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void preenche(int* p, int nl,int nc);
void exibe(int* p, int nl,int nc);

int main(void) {

	int* p;
	int nColunas, nLinhas;

	printf("Entre com o numero de linhas: ");
	scanf("%d", &nLinhas);
	printf("Entre com o numero de colunas: ");
	scanf("%d", &nColunas);

	p = (int*)malloc(nLinhas * nColunas * sizeof(int));
	if (!p) {
		//erro de alocação de memoria
		fprintf(stderr, "Erro de alocacao de memoria");
		return 8752;
	}
	
	preenche(p,nLinhas,nColunas);
	exibe(p,nLinhas,nColunas);

	free(p);
	return 0;
}
void preenche(int* p, int nLinhas, int nColunas) {
	for (int i = 0; i < nLinhas; i++) {
		for (int j = 0; i < nColunas; i++) {
			// p[i][j] = i * (j + 1); errado pois p aponta pra um inteiro
			*(p + i * nColunas + j) = i * (j + 1);
		}
	}
}

void exibe(int* p, int nLinhas, int nColunas) {
	for (int i = 0; i < nLinhas; i++) {
		for (int j = 0; i < nColunas; i++) {
			printf("%d ", * (p + i * nColunas + j) = (2 * i + 1) * (j + 1));
		}
		putchar("/n");
	}
}