#include <stdio.h>

int main(){

	double pessoaA , pessoaB, pessoaC, valorDoPremio, totalAposta;

	printf("Ola, informe quanto a pessoa A investiu \n");

	scanf("%lf", &pessoaA);

	printf("Informe quanto a pessoa B investiu \n");

	scanf("%lf", &pessoaB);

	printf("Informe quanto a pessoa C investiu \n");

	scanf("%lf", &pessoaC);

	printf("Informe qual e o valor estimado total do premio \n");

	scanf("%lf", &valorDoPremio);

	totalAposta = pessoaA + pessoaB + pessoaC;

	printf("O premio para a pessoa A sera : %.2lf \n", ((pessoaA / totalAposta) * valorDoPremio));

	printf("O premio para a pessoa B sera : %.2lf \n", ((pessoaB / totalAposta) * valorDoPremio));

	printf("O premio para a pessoa C sera : %.2lf \n", ((pessoaC / totalAposta) * valorDoPremio));

	return 0;
}
