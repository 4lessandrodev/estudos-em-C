#include <stdio.h>

int main(){

	int a, b;

	printf("Informe o valor de a: \n");

	scanf("%d", &a);

	printf("Informe o valor de b: \n ");

	scanf("%d", &b);

	printf("O resultado da operacao: %d \n ", (((a * a) / a) + ((b * b) / b)));

	return 0;
}
