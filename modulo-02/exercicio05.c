#include <stdio.h>
#include <conio.h>

int main(){
	int numero;

	printf("Me informe um numero \n");

	scanf("%d", &numero);

	if((numero % 2) == 0){
		printf("O numero eh par \n");
	}else{
		printf("O numero eh impar");
	}
}
