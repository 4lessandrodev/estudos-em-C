#include <stdio.h>

int main(){
	
	int numero;
	printf("Informe um numero \n");

	scanf("%d", &numero);

	if((numero % 3) == 0){
	
		printf("O numero escolhido eh divisivel por 3 \n");

	}else if((numero % 5) == 0){
	
		printf("O numero escolhido eh divisivel por 5 \n");

	}

	return 0;
}
