#include <stdio.h>

int main(){

	double largura, comprimento, custoMetroTela, areaQuadrada;

	printf("Informe a largura do terreno \n");

	scanf("%lf", &largura);

	printf("Informe o comprimento do terreno \n");

	scanf("%lf", &comprimento);

	printf("Informe o custo do m2 da tela \n");

	scanf("%lf", &custoMetroTela);

	areaQuadrada = largura * comprimento;

	printf("O custo com tela sera: %.2lf ", (custoMetroTela * areaQuadrada));

	return 0;
}
