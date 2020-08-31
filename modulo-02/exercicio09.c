#include <stdio.h>

int main(){

	double salario, valorLimite, valorEmprestimo;
	int qtdParcelas;
	int limiteParcelas = 12;

	printf("Me informe seu salario... \n");

	scanf("%lf", &salario);

	valorLimite = salario * 0.2;

	printf("Qual o valor do emprestimo solicitado ... \n");

	scanf("%lf", &valorEmprestimo);

	printf("Quantas parcelas ... \n");

	scanf("%d", &qtdParcelas);

	printf("Valor limite por parcela: %.2lf \n", valorLimite);

	if(qtdParcelas >= limiteParcelas){
		printf("O limite de parcelas eh %d \n", limiteParcelas);

		if((valorEmprestimo / limiteParcelas) <= valorLimite ){
			printf("Emprestimo aprovado, em 12x de %.2lf \n", (valorEmprestimo / limiteParcelas));
		}else{
			printf("Emprestimo negado, sem limite");
		}
	}else{

		if((valorEmprestimo / qtdParcelas) <= valorLimite ){
			printf("Emprestimo aprovado, em %d x de %.2lf \n", qtdParcelas, (valorEmprestimo / qtdParcelas));
		}else{
			printf("Emprestimo negado, sem limite");
		}

	}

	return 0;
}
