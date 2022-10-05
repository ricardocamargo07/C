#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_NOME 100

int main(void) {
	FILE* pArq;
	char* nome;
	char* p;
	int i = 1;

	pArq = fopen("C:/Users/e1713112/Desktop/Nomes.txt","r");

	printf("Programa iniciando.\n");
	
	if (!pArq) {
		fprintf(stderr, "Erro ao tentar abrir o arquivo.\n");
		return -1;
	}

	nome = (char *)malloc(TAMANHO_NOME * sizeof(char));

	if (!nome) {
		fprintf(stderr, "Erro de alocacao de memoria.\n");
		return -2;
	}

	//Ordem normal.
	while (fgets(nome, TAMANHO_NOME, pArq) != NULL) {
		printf("%d - Nome: %s\n", i,nome);
		i++;
		fgets(nome, TAMANHO_NOME, pArq);

	}

	//Ordem ao contrario.
	

	fclose(pArq);
	free(nome);
	
	return 0;
}