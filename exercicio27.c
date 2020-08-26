#include <stdio.h>

int main(){

	int hectares = 0;

	printf("Informe um tamanho em hectar \n");

	scanf("%d", &hectares);

	printf("Os hectares convertidos em metros quadrados sera %d", (hectares * 1000));

	return 0;
}
