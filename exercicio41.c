#include <stdio.h>

int main(){

	int horasTrabalhadas = 0;
	double valorHora = 0.0;
	const int acrescimos = 10;

	printf("Informe o valor da hora \n");

	scanf("%lf", &valorHora);

	printf("Informe quantas horas voce trabalhou \n");

	scanf("%d", &horasTrabalhadas);

	double total = (((horasTrabalhadas * valorHora) * acrescimos)/100) + horasTrabalhadas * valorHora;

	printf("Total a receber e %.2lf \n", total);

	return 0;
}
