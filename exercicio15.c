#include <stdio.h>


int main(){

	const double PI = 3.14;
	const int GRAU = 180;
	double angulo = 0;

	printf("Informe um angulo em radianos \n");

	scanf("%lf", &angulo);

	printf("O resultado da conversao eh: %.2lf", (angulo * GRAU / PI));

	return 0;
}
