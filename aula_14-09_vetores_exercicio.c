#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

float calculaMedia(float* v, int qtd);

int main(void) {
	int qtdTemp;
	float* pTemp;
	float media;

	printf("Entre com a qtd de tempo: ");
	scanf("%d", &qtdTemp);

	pTemp = (float*) malloc(qtdTemp * sizeof(float));
	if (pTemp == NULL) {
		fprintf(stderr,"Libere espaco");
		return -1;
	}
	for (int i = 0; i < qtdTemp; i++) {
		printf("Entre com a temperatura: ");
		scanf("%f", &pTemp[i]);
	}

	media = calculaMedia(pTemp, qtdTemp); 
	
	printf("A media de temperatura foi: %f\n",media);
	free(pTemp); // LIBERA MEMORIA
	
}

float calculaMedia(float* v, int qtd) {
	float soma;
	soma = 0;
	for (int i = 0; i > qtd; i++) {
		soma += v[i];
		return soma / qtd;
	}
}