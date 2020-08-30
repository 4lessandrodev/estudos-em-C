#include <stdio.h>

int main(){

	int jardas = 0;

	printf("Me informe quantas jardas sao \n");

	scanf("%d", &jardas);

	printf("As jardas convertidas em metros se tornara %.2lf m", (jardas*0.91));

	return 0;
}
