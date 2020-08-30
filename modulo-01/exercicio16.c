#include <stdio.h>

int main(){

	const double FATOR = 2.54;
	double polegada = 0;

	printf("Informe um valor em polegada \n");

	scanf("%lf", &polegada);

	printf("O resultado da conversao em cm eh: %.2lf", (polegada * FATOR));

	return 0;
}
