#include <stdio.h>

int main(){

	double temperatura = 0;

	printf("Informe uma temperatura em K \n");

	scanf("%lf", &temperatura);

	printf("A temperatura em C eh: %.2lf", (temperatura - 273.15));

	return 0;
}
