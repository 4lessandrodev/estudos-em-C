#include <stdio.h>

int main(){

	int metros = 0;

	printf("Informe o tamanho em m2 \n");

	scanf("%d", &metros);

	printf("Os metros convertidos em acre sera: %.2lf", (metros * 0.000247));

	return 0;
}
