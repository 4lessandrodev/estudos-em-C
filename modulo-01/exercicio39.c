#include <stdio.h>

int main(){

	double premioTotal = 780.000;

	int percentualGanhadorA = 46;
	int percentualGanhadorB = 32;
	int percentualGanhadorC = 100 - (percentualGanhadorA + percentualGanhadorB);

	printf("O  ganhador A recebera: %.2lf \n", ((premioTotal * percentualGanhadorA)/100));
	printf("O  ganhador B recebera: %.2lf \n", ((premioTotal * percentualGanhadorB)/100));
	printf("O  ganhador C recebera: %.2lf \n", ((premioTotal * percentualGanhadorC)/100));

	printf("O montante de: %.2lf",
			(((premioTotal * percentualGanhadorA)/100) +
			((premioTotal * percentualGanhadorB)/100) +
			((premioTotal * percentualGanhadorC)/100)));

	return 0;
}
