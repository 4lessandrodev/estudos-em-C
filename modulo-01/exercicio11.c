#include <stdio.h>

int main() {

	double velocidade = 0;

	printf("informe uma velocidade em m/s \n");

	scanf("%lf", &velocidade);

	printf("A velocidade %.2lf m/s convertida em km eh: %.2lf km/h", velocidade, (velocidade * 3.6));

	return 0;
}
