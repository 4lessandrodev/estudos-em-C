#include <stdio.h>

int
main(void)
{
	int distanciaPercorrida;
	int consumoDeGasolina;
	printf("Informe quantos km voce percorreu \n");
	scanf("%d", &distanciaPercorrida);
	printf("Informe o consumo de combustivel na viagem \n");
	scanf("%d", &consumoDeGasolina);
	int resultado = distanciaPercorrida / consumoDeGasolina;
	if(resultado < 8)
	{
		printf("Venda o carro. Ele esta consumindo %d litros por km \n", resultado);
	}
	else if(resultado >= 8 && resultado <= 14)
	{
		printf("Economico. Seu carro esta consumindo %d litros por km \n", resultado);
	}
	else if(resultado > 12)
	{
		printf("Super economico. Seu carro esta consumindo %d litros por km \n", resultado);
	}
}	
