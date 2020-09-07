#include <stdio.h>

int main(){
 double notaA = 0.00; 
 double notaB = 0.00; 
 double notaC = 0.00; 
 double notaD = 0.00;
 double media = 0.00;
 double pesoPrimeiroSemestre = 1.00;
 double pesoSegundoSemestre = 2.00;

  printf("Informe a nota da prova do primeiro bimestre \n");
  scanf("%lf", &notaA);


  printf("Informe a nota da prova do segundo bimestre \n");
  scanf("%lf", &notaB); 

  printf("Informe a nota da prova do terceiro bimestre \n");
  scanf("%lf", &notaC);

  printf("Informe a nota da prova do quarto bimestre \n");
  scanf("%lf", &notaD);

  media = ((notaA * pesoPrimeiroSemestre) + (notaB * pesoPrimeiroSemestre) + (notaC * pesoSegundoSemestre) + (notaD * pesoSegundoSemestre)) / ((pesoPrimeiroSemestre * 2) + (pesoSegundoSemestre * 2));

 printf("A media do aluno no ano letivo foi: %lf \n", media);
}
