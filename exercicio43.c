#include <stdio.h>


int main(){

	double total = 0;

	printf("Informe o total");

	scanf("%lf", &total);


	printf("Total a pagar %.2lf \n", (total - (total * 0.10)));
	printf("Valor da parcela 3x  %.2lf \n", ((total)/3));
	printf("Comissao venda a vista %.2lf \n", ((total - (total * 0.10)) * 0.05));
	printf("Comissao venda parcelada %.2lf \n", (total * 0.05));

	return 0;
}
