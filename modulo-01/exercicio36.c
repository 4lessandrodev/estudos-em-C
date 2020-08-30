// Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro
//O volume de um cilindro circular é calculado por meio da seguinte formula
// V = r * raio ^ 2 onde r = 3.141592

#include <stdio.h>

int main(){

	int altura = 0;
	int raio = 0;
	const double PI = 3.141592;

	printf("Informe a altura do cilindro: \n");

	scanf("%d", &altura);

	printf("Informe o raio do cilindro: \n");

	scanf("%d", &raio);

	printf("Volume do cilindro e: %.2lf \n", (PI * (raio * raio) * altura));

	return 0;
}
