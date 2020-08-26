#include <stdio.h>

int main(){

	int acres = 0;

	printf("Informe o tamanho em acres \n");

	scanf("%d", &acres);

	printf("O tamanho convertido em metros sera: %.2lf", (acres * 4048.58));

	return 0;
}
