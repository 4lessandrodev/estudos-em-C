#include <stdio.h>
#include <math.h>

int main(){

	int numero;
	int result;

	printf("Informe um numero \n");

	scanf("%d", &numero);

	if(numero < 0){
	printf("Numero invalido, informe um numero positivo \n");
	}else{
		result = log(numero);
		printf("O log de %d, eh %d ", numero, result);
	}

}

