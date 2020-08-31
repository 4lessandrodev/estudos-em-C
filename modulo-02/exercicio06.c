#include <stdio.h>

int main(){
	int numeroA, numeroB;

	printf("Informe o numero A \n");

	scanf("%d", &numeroA);

	printf("Informe o numero B \n");

	scanf("%d", &numeroB);

	if(numeroA > numeroB){
		printf("O numero A eh maior que o numero B \n");
		printf("numero A: %d numero B: %d ... Diferenca: %d", numeroA, numeroB, (numeroA - numeroB));
	}else if(numeroA < numeroB){
		printf("O numero B eh maior que o numero A \n");
		printf("numero A: %d numero B: %d ... Diferenca: %d", numeroA, numeroB, (numeroB - numeroA));
	}else{
		printf("O numero B e numero A sao iguais \n");
		printf("numero A: %d numero B: %d ... Diferenca: %d", numeroA, numeroB, (numeroB - numeroA));
	}
}
