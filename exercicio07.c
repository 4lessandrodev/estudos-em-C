#include <stdio.h>

int main(){

	double temperatura = 0;

	printf("Informe uma temperatura em fahrenheit \n");

	scanf("%lf", &temperatura);

	printf("A temperatura em Celcius eh: %.2lf", (5.0 * (temperatura - 32.0)/9.0));

	return 0;
}
