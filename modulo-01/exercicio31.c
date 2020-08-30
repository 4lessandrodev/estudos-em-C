#include <stdio.h>

int main(){

	int numero = 0;

	printf("Me informe um numero \n");

	scanf("%d", &numero);

	printf("Os numero anterior ao informado e %d \n", (numero - 1));
	printf("Os numero sucessor ao informado e %d \n", (numero + 1));

	return 0;
}
