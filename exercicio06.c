#include <stdio.h>

int main(){

	double temperatura = 0;

	printf("Informe a temperatura em C \n");

	scanf("%lf", &temperatura);

	printf("Em fahrenheit eh: %lf \n", ( temperatura * 9.0 / 5.0) + 32.0);

	return 0;
}
