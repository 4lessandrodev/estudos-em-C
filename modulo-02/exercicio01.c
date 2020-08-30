#include <stdio.h>

int main(){

	int numeroA, numeroB;

	printf("Informe dois numeros \n");

	scanf("%d", &numeroA);

	scanf("%d", &numeroB);

	if(numeroA < numeroB){
		printf("O numero B eh maio que o numero A \n");
		printf("Numero A : %d \n", numeroA);
		printf("Numero B : %d \n", numeroB);
	}else if(numeroA == numeroB){
		printf("O numero B eh igual ao numero A \n");
		printf("Numero A : %d \n", numeroA);
		printf("Numero B : %d \n", numeroB);
	}else{
		printf("O numero A eh maio que o numero B \n");
		printf("Numero A : %d \n", numeroA);
		printf("Numero B : %d \n", numeroB);
	}

	return 0;
}
