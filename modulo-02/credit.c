#include <stdio.h>

int 
main(void)
{

	int soma = 0;
	int creditCard[16];
	printf("Informe o numero do cartao de credito \n");

	for(int i = 0; i < 16; i++)
	{
		switch(i)
		{
			case 0:
				printf("Qual eh o [%d] primeiro numero do seu cartao de credito  ... Informe apenas 1 digito e pressione enter \n", i+1);
				scanf("%d", &creditCard[i]);
				if(creditCard[i] > 9)
				{
					printf("Numero invalido \n");
					return 0;
				}
				break;
			case 1:
				printf("Qual eh o [%d] segundo numero do seu cartao de credito  ... Informe apenas 1 digito e pressione enter \n", i+1);
				scanf("%d", &creditCard[i]);
				if(creditCard[i] > 9)
				{
					printf("Numero invalido \n");
					return 0;
				}
				break;
			case 2:
				printf("Qual eh o [%d] terceiro numero do seu cartao de credito  ... Informe apenas 1 digito e pressione enter \n", i+1);
				scanf("%d", &creditCard[i]);
				if(creditCard[i] > 9)
				{
					printf("Numero invalido \n");
					return 0;
				}
				break;
			case 3:
				printf("Qual eh o [%d] quarto numero do seu cartao de credito ... Informe apenas 1 digito e pressione enter \n", i+1);
				scanf("%d", &creditCard[i]);
				if(creditCard[i] > 9)
				{
					printf("Numero invalido \n");
					return 0;
				}
				break;
			case 4:
				printf("Qual eh o [%d] quinto numero do seu cartao de credito  ... Informe apenas 1 digito e pressione enter \n", i+1);
				scanf("%d", &creditCard[i]);
				if(creditCard[i] > 9)
				{
					printf("Numero invalido \n");
					return 0;
				}
				break;
			case 5:
				printf("Qual eh o [%d] sexto numero do seu cartao de credito ... Informe apenas 1 digito e pressione enter \n", i+1);
				scanf("%d", &creditCard[i]);
				if(creditCard[i] > 9)
				{
					printf("Numero invalido \n");
					return 0;
				}
				break;
			case 6:
				printf("Qual eh o [%d] setimo numero do seu cartao de credito ... Informe apenas 1 digito e pressione enter \n", i+1);
				scanf("%d", &creditCard[i]);
				if(creditCard[i] > 9)
				{
					printf("Numero invalido \n");
					return 0;
				}
				break;
			case 7:
				printf("Qual eh o [%d] oitavo numero do seu cartao de credito ... Informe apenas 1 digito e pressione enter \n", i+1);
				scanf("%d", &creditCard[i]);
				if(creditCard[i] > 9)
				{
					printf("Numero invalido \n");
					return 0;
				}
				break;
			case 8:
				printf("Qual eh o [%d] nono numero do seu cartao de credito  ... Informe apenas 1 digito e pressione enter \n", i+1);
				scanf("%d", &creditCard[i]);
				if(creditCard[i] > 9)
				{
					printf("Numero invalido \n");
					return 0;
				}
				break;
			case 9:
				printf("Qual eh o [%d] decimo numero do seu cartao de credito  ... Informe apenas 1 digito e pressione enter \n", i+1);
				scanf("%d", &creditCard[i]);
				if(creditCard[i] > 9)
				{
					printf("Numero invalido \n");
					return 0;
				}
				break;
			case 10:
				printf("Qual eh o [%d] decimo primeiro numero do seu cartao de credito  ... Informe apenas 1 digito e pressione enter \n", i+1);
				scanf("%d", &creditCard[i]);
				if(creditCard[i] > 9)
				{
					printf("Numero invalido \n");
					return 0;
				}
				break;
			case 11:
				printf("Qual eh o [%d] decimo segundo numero do seu cartao de credito  ... Informe apenas 1 digito e pressione enter \n", i+1);
				scanf("%d", &creditCard[i]);
				if(creditCard[i] > 9)
				{
					printf("Numero invalido \n");
					return 0;
				}
				break;
			case 12:
				printf("Qual eh o [%d] decimo terceiro numero do seu cartao de credito  ... Informe apenas 1 digito e pressione enter \n", i+1);
				scanf("%d", &creditCard[i]);
				if(creditCard[i] > 9)
				{
					printf("Numero invalido \n");
					return 0;
				}
				break;
			case 13:
				printf("Qual eh o [%d] decimo quarto numero do seu cartao de credito ... Informe apenas 1 digito e pressione enter \n", i+1);
				scanf("%d", &creditCard[i]);
				if(creditCard[i] > 9)
				{
					printf("Numero invalido \n");
					return 0;
				}
				break;
			case 14:
				printf("Qual eh o [%d] decimo quinto numero do seu cartao de credito  ... Informe apenas 1 digito e pressione enter \n", i+1);
				scanf("%d", &creditCard[i]);
				if(creditCard[i] > 9)
				{
					printf("Numero invalido \n");
					return 0;
				}
				break;
			case 15:
				printf("Qual eh o [%d] decimo sexto numero do seu cartao de credito  ... Informe apenas 1 digito e pressione enter \n", i+1);
				scanf("%d", &creditCard[i]);
				if(creditCard[i] > 9)
				{
					printf("Numero invalido \n");
					return 0;
				}
				break;
			default:
				printf("Numero invalido");
		}
	}

	for(int i = 0; i < 16; i++)
	{

		if((i % 2) == 0)
		{
			float resultMultiplicacao;
			float decimalA;
			float decimalB;
			resultMultiplicacao = creditCard[i] * 2;

			if(resultMultiplicacao > 9)
			{
				decimalA = (resultMultiplicacao / 10);

				soma += (int) decimalA;

				decimalB = ((int) resultMultiplicacao % 10);

				soma += (int) decimalB;

			}
			else
			{
				soma += resultMultiplicacao;
			}
		}
		else
		{
			soma += creditCard[i];
		}
	}

	printf("Resultado da equacao: %d \n", soma);
	if((soma % 10) == 0)
	{
		printf("Cartao valido \n");
	}
	else
	{
		printf("Cartao invalido \n");
	}

}
