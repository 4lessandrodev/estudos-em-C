#include <stdio.h>

int main(){
	const double PI = 3.14;
	const int GRAUS = 180;
	double angulo = 0;

	printf("Informe um angulo em graus que eu o converto para radianos: \n");

	scanf("%lf", &angulo);

	printf("O resultado da conversao eh: %.2lf", (angulo * PI / GRAUS));

	return 0;
}
