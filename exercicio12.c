#include <stdio.h>

int main(){

	double distancia = 0;

	printf("Informe uma distancia em milhas \n");

	scanf("%lf", &distancia);

	printf("A distancia %.2lf em milhas convertida para km eh: %2.lf", distancia, (distancia * 1.61));

	return 0;
}
