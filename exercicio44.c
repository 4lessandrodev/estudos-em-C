#include <stdio.h>

int main(){

	double altura = 0;
	double alturaDeCadaDegrau = 0;

	printf("Qual a altura voce deseja alcancar: \n");

	scanf("%lf", &altura);

	printf("Qual a altura de cada degrau \n");

	scanf("%lf", &alturaDeCadaDegrau);

	printf("Voce deve subir %.2lf degraus para alcancar seu objetivo", (altura / alturaDeCadaDegrau));

	return 0;
}
