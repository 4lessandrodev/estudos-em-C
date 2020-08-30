#include <stdio.h>

int main(){

	int massa = 0;

	printf("Informe uma massa em kg \n");

	scanf("%d", &massa);

	printf("A massa convertida em libras eh: %.2lf", (massa / 0.45));

	return 0;
}
