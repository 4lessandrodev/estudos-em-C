#include <stdio.h>

int main(){

	double massa = 0;

	printf("Informe uma massa em libras \n");

	scanf("%lf", &massa);

	printf("A massa em libras convertida em quilogramas eh %.2lf", (massa * 0.45));

	return 0;
}
