#include <stdio.h>

int main(){

	double altura;
	char sexo[1];

	printf("Informe sua altura \n");

	scanf("%lf", &altura);

	printf("Informe seu genero: M para Masculino ou F para Feminino: \n");

	scanf("%s", &sexo);

	if(sexo == "M"){
		printf("Seu peso ideal eh: %.2lf \n", ((72.7 * altura) - 58) );
	}else{
		printf("Seu peso ideal eh: %.2lf \n", ((62.1 * altura) - 44.7) );
	}

	return 0;
}
