#include <stdio.h>

int main(){

	int idade;
	int tempoDeServico;

	printf("Informe a idade do trabalhador \n");
	scanf("%d", &idade);
	printf("Informe o tempo de servico do trabalhador \n");
	scanf("%d", &tempoDeServico);

	printf("Idade: %d anos, Trabalhou por: %d anos\n", idade, tempoDeServico);

	if(idade >= 65){
		printf("O trabalhador pode se aposentar \n");
	}else if(tempoDeServico >= 30){
		printf("Pode se aposentar por tempo de servico \n");
	}else if(idade >= 60 && tempoDeServico >= 25){
		printf("O trabalhador pode se aposentar, idade + tempo de servico \n");
	}else{
		printf("O trabalhador ainda nao pode se aposentar \n");
	}

	return 0;
}
