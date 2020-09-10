#include <stdio.h>

int 
main(void)
{

	int year;
	printf("Informe um numero \n");
	scanf("%d", &year);

	if((year % 100) == 0)
	{
		printf("O ano nao eh bisexto \n");
	}
	else if(((year % 4) == 0) || ((year % 400) == 0))
	{
		printf("O ano eh bisexto \n");
	}
	else
	{
		printf("O ano nao eh bisexto \n");
	}
}
