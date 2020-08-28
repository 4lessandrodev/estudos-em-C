#include <stdio.h>

int main(){

	int desconto = 12;

	int valor = 0;

	printf("Informe o preco do produto \n");

	scanf("%d", &valor);

	printf("Voce deve pagar %d", (valor - ((valor * desconto)/100)));

	return 0;
}
