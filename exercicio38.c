#include <stdio.h>

int main(){

	double salario = 0;

	const int aumento = 25;

	printf("Me informe qual e o salario \n");

	scanf("%lf", &salario);

	printf("O salario reajustado e: %.2f", (salario + ((salario * aumento) / 100)));

	return 0;
}
