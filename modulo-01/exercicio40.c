#include <stdio.h>

int main(){

	double valorDaDiaria = 30.00;
	int quantidadeDeDiasTrabalhados = 0;
	double percentualIR = 8.0;
	double total = 0;
	double descontos = 0;

	printf("Me informe quantos dias o colaborador trabalhou \n");

	scanf("%d", &quantidadeDeDiasTrabalhados);

	descontos = ((quantidadeDeDiasTrabalhados * valorDaDiaria) * percentualIR) / 100;
	total = ((quantidadeDeDiasTrabalhados * valorDaDiaria) - descontos);

	printf("O salda a ser pago e: %lf", total);

	return 0;
}
