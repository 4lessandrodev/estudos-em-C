#include <stdio.h>


int main(){

	double temperatura = 0;

	printf("Informe uma temperatura em C \n");

	scanf("%lf", &temperatura);

	printf("A temperatura em K eh: %.2lf", (temperatura + 273.15));

	return 0;
}
