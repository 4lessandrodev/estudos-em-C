#include <stdio.h>

int main(){

	int opcao = 0;
	double numeroA, numeroB;

	printf("Escolha uma opcao \n");
	printf(" 1 - Adicao \n 2 - Multiplicacao \n 3 - Divisao \n 4 - Subtracao \n");
	scanf("%d",&opcao);

		printf("Informe os  dois numeros que deseja realizar a operacao: \n");
		scanf("%lf", &numeroA);
		scanf("%lf", &numeroB);

	switch(opcao){
		case 1:
		printf("Voce escolheu somar: %.2lf + %.2lf = %.2lf \n", (double) numeroA, numeroB, (numeroA + numeroB));
		break;
		case 2:
		printf("Voce escolheu multiplicar: %.2lf x %.2lf = %.2lf \n", (double) numeroA, numeroB, (numeroA * numeroB));
		break;
		case 3:
		printf("Voce escolheu dividir: %.2lf / %.2lf = %.2lf \n", (double) numeroA, numeroB, (numeroA / numeroB));
		break;
		case 4:
		printf("Voce escolheu subtrair: %.2lf / %.2lf = %.2lf \n", (double) numeroA, numeroB, (numeroA - numeroB));
		break;
		default:
		printf("Opcao invalida");
	}

	return 0;
}
