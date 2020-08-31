#include <stdio.h>

int main(){

	double notaA, notaB;

	printf("Informe a nota do primeiro semestre \n");

	scanf("%lf", &notaA);

	if(notaA < 0.0 || notaA > 10.0){
		printf("Nota invalida, informe uma nota entre 0 e 10 \n");

		printf("Informe a nota do primeiro semestre \n");

		scanf("%lf", &notaA);
	}

	printf("Informe a nota do segundo semestre \n");

	scanf("%lf", &notaB);

	if(notaB < 0.0 || notaB > 10.0){
		printf("Nota invalida, informe uma nota entre 0 e 10 \n");

		printf("Informe a nota do segundo semestre \n");

		scanf("%lf", &notaB);
	}

	printf("A media das notas eh: %.2lf", ((notaA + notaB) / 2));

	return 0;
}
