#include <stdio.h>

int main(){
	
	int unidade, dezena, centena, numero;

	printf("Informe um numero de tres digitos \n");

	scanf("%d", &numero);

	if(numero < 100 || numero > 999 || numero < 0){
	 printf("Informe um numero valido \n");
	}else{
	 dezena = (int) (numero % 100) / 10;
	 centena = (int) (numero / 100);
	 unidade = (int) ((numero % 100) % 10);
	 printf("Resultado de %d + %d + %d = %d",  centena, dezena, unidade, (dezena + centena + unidade));
	}

	return 0;
}
