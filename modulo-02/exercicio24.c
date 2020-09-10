#include <stdio.h>

int 
main(void)
{
	int estado;
	double valor;

	printf("Qual eh o preco do produto \n");
	scanf("%lf", &valor);
	printf("Informe qual estado sera enviado o produto \n MG: 1 \n MS: 2 \n SP: 3 \n RJ: 4 \n");
	scanf("%d", &estado);

	switch(estado)
	{
		case 1:
			printf("O valor total com impostos %.2lf \n", (float) (((valor * 7) / 100) + valor ));
		break;
		case 2:
			printf("O valor total com impostos %.2lf \n", (float) (((valor * 8) / 100) + valor ));
		break;
		case 3:
			printf("O valor total com impostos %.2lf \n", (float) (((valor * 12) / 100) + valor ));
		break;
		case 4:
			printf("O valor total com impostos %.2lf \n", (float) (((valor * 15) / 100) + valor ));
		break;
		default:
			printf("Estado invalido \n");
		break;
	}
}
