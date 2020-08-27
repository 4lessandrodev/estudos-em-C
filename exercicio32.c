#include <stdio.h>

int main(){

	int numero = 0;

	printf("Informe um numero \n");

	scanf("%d", &numero);

	printf("O resultado e : %d", (((numero * 3) + 1) + ((numero * 2) - 1)));

	return 0;
}
