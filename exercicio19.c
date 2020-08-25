#include <stdio.h>

int main(){

	int litros = 0;

	printf("Informe um volume em litros \n");

	scanf("%d", &litros);

	printf("O resultado da conversao em m3 eh: %2d", (litros / 1000));

	return 0;
}
