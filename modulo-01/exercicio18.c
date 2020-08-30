#include <stdio.h>

int main(){

	int volume = 0;

	printf("Informe um volume \n");

	scanf("%d", &volume);

	printf("A conversao em litros eh %2d", (volume * 1000));

	return 0;
}
