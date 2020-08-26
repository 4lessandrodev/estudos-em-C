#include <stdio.h>

int main(){

	int metros = 0;

	printf("Informe um tamanho em metros \n");

	scanf("%d", &metros);

	printf("Os metros convertidos em hectares serao %.2lf", (metros * 0.0001));

	return 0;
}
