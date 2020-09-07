#include <stdio.h>

int main(){

	int baseMaior, baseMenor, altura;

	printf("Informe a base maior do trapezio \n");
	scanf("%d", &baseMaior);

	printf("Informe a base menor do trapezio \n");
	scanf("%d", &baseMenor);

	printf("Informe a altura do trapezio \n");
	scanf("%d", &altura);

	if(baseMenor < 0 || baseMaior < 0){
		printf("Informe um numero valido");
	}



	printf("Base Maior: %d \n", baseMaior);
	printf("Base Menor: %d \n", baseMenor);

	printf("O resultado da area eh: %.2lf \n", (double) (((baseMaior + baseMenor)*altura)/2));

}
