#include <stdio.h>

int main(){

	int metros = 0;

	printf("Me informe quantos metros sao \n");

	scanf("%d", &metros);

	printf("Os metros convertidos em jardas sera %.2lf", (metros/0.91));

	return 0;
}
