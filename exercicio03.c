#include <stdio.h>

int main(){

	int numeroA;
	int numeroB;
	int numeroC;
	int total;

	printf("Digite o primeiro numero inteiro \n");
	scanf("%d", &numeroA);

	printf("Digite o segundo numero inteiro \n");
	scanf("%d", &numeroB);

	printf("Digite o terceiro numero \n");
	scanf("%d", &numeroC);

	total = numeroA + numeroB + numeroC;
	printf("O total = %d", total);


	return 0;
}
