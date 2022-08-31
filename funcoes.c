#include <stdio.h>
#include <math.h>

float calculaValorFinalporPrincipal(float principal, int nMeses, float juros){
	float valorFinal;

	valorFinal = principal * powf(1 + juros, nMeses);
	return valorFinal;

}

float calculaPrincipalporValorFinal(float valorFinal, int nMeses, float juros){
	float principal;

	principal = valorFinal / powf(1 + juros, nMeses);
	return principal;


}
float calculaPrestacaoporPrincipal(float principal, int nMeses, float juros){

	return principal * juros * powf(1 + juros, nMeses)/( powf(1 + juros, nMeses) -1 );

}
float calculaValorFinalporPrestacao(float prestacao, int nMeses, float juros){

	return prestacao * (powf(1 + juros, nMeses) - 1) / juros;
}