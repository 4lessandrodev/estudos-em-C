#include <stdio.h>

int main(){

	double valor;

	printf("Ola, me informe um valor real\n");

	scanf("%lf", &valor);

	printf("O quadrado de %lf eh %lf", valor, valor * valor);

	return 0;
}
