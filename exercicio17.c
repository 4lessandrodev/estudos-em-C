#include <stdio.h>

int main(){

	int centimetro = 0;

	printf("Informe um valor em centimetro \n");

	scanf("%d", &centimetro);

	printf("O valor convertido para polegadas eh: %.2lf", (centimetro / 2.54));

	return 0;
}
