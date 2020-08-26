#include <stdio.h>

int main(){

	double a, b, c, d;

	printf("Informe 4 notas \n");

	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	scanf("%lf", &d);

	printf("A média das notas informadas e %.2lf", ((a+b+c+d)/4));

	return 0;
}
