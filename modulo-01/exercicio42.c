#include <stdio.h>

int main(){

	double salarioBase = 0;
	const double descontoPercentual = 7.00 / 100;
	const double gratificacaoPercentual = 5.00 / 100;
	double total;

	printf("Informe o salario base \n");

	scanf("%lf", &salarioBase);

	total = ((gratificacaoPercentual * salarioBase) + salarioBase) - (salarioBase * descontoPercentual);

	printf("Salario a receber: %.2lf \n", total);

	return 0;
}
