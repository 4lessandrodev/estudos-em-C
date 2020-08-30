#include <stdio.h>

int main(){

	const double PI = 3.141592;
	int raio = 0;

	printf("Informe um raio \n");

	scanf("%d", &raio);

	printf("O resultado %.2lf", (PI * (raio * raio)));

	return 0;
}
