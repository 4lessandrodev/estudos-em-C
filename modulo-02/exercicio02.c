#include <stdio.h>
#include<stdbool.h>

int main(){

	int numero;
	bool encontrou = false;
	int indice = 1;
	int resultado = 0;

	printf("Me informe um número \n");

	scanf("%d", &numero);

	if(numero > 0){
		//Calcular raiz quadrada
		while(encontrou == false){
			if((numero /indice) == indice){
				encontrou = true;
				resultado = indice;
			}else if((numero /indice) < indice){
				encontrou = true;
				resultado = indice - 1;
			}

			indice++;
		}
		printf("Resultado apenas em inteiros pode ocorrer arredondamentos \n");
		printf("A raiz quadrada de %d eh: %d", numero, resultado);

	}else{

		printf("Número invalido, informe um numero positivo");
	}

	return 0;
}
