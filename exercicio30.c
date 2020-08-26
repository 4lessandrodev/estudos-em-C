#include <stdio.h>

int main(){

	double real, dolar;

	printf("Quanto esta a cotacao do dolar \n");

	scanf("%lf", &dolar);

	printf("Quantos reais voce tem \n");

	scanf("%lf", &real);

	printf("Se voce trocar seus reais em dolar voce tera %.2lf dolares", (real / dolar));

	return 0;
}
