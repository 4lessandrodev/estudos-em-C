#include <stdio.h>
#include <math.h>

int main(){

	double numero = 0;

	printf("Me informe um numero \n");

	scanf("%lf", &numero);

	if(numero >= 0){
		printf("Quadrado de %.2lf eh: %.2lf \n", numero, (numero * numero));
		printf("Raiz quadrada de %.2lf eh: %.2lf", numero, sqrt(numero));
	}else{
		printf("Informe um numero positivo");
	}

	return 0;
}
