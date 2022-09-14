#include <stdio.h>

int main(void) {
	int vInt[] = { 8,7,5,2,4,6,9 };
	int* pInt;

	printf("Tentativa 1\n");
	for (int i = 0; i < 7; i++) {
		printf("v[%d] = %d\n",i , vInt[i]);
	}

	printf("Tentativa 2\n");
	for (int i = 0; i < 7; i++) {
		printf("v[%d] = %p --> %d\n", i, vInt+i, *(vInt + i));
	}

	//			**************** USAR NA MISSAO 3 (TENTATIVA 3) ****************

	printf("Tentativa 3\n");
	pInt = vInt;
	//vInt= pInt; proibido - vInt é constante
	for (int i = 0; i < 7; i++) {
		printf("v[%d] = %p --> %d\n", i, pInt, *pInt);
		//pInt = pInt + 1; ou pInt +=1
		pInt++;
	}

	printf("Tentativa 4\n");
	pInt = vInt;
	//vInt= pInt; proibido - vInt é constante
	for (int i = 0; i < 7; i++) {
		printf("v[%d] = %p --> %d\n", i, (pInt+i), *(pInt+i));

	}

	printf("Tentativa 5\n");
	pInt = vInt;
	//vInt= pInt; proibido - vInt é constante
	for (int i = 0; i < 7; i++) {
		printf("v[%d] = %d\n", i, pInt[i]);

	}
}