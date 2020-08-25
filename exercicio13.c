#include <stdio.h>

int main(){

	double distancia = 0;

	printf("Informe uma distancia em km \n");

	scanf("%lf", &distancia);

	printf("A distancia %.2lf km convertida em milhas eh: %.2lf", distancia, (distancia / 1.61));

	return 0;
}
