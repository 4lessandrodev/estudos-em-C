#include <stdio.h>

int main(){

	double velocidade = 0;

	printf("Informe uma velocidade em km/h \n");

	scanf("%lf", &velocidade);

	printf("A velocidade convertida em m/s eh: %.2lf", (velocidade/ 3.6));

	return 0;
}
