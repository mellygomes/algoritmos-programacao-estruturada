#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

float number1, number2;

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n                -------- VERIFICA��O DE N�MEROS --------\n");
	printf("\n");
	
//	grava��o dos n�meros
	
	printf("Digite o 1� n�mero:\n");
	fflush(stdin);
	scanf("%f", &number1);
	
	printf("DIgite o 2� n�mero:\n");
	fflush(stdin);
	scanf("%f", &number2);
	
	system("cls");
	
//	verifica��o e impress�o
	
	if (number1 > number2) {
		printf("\nO primeiro n�mero inserido (%.2f) � MAIOR que o segundo n�mero inserido (%.2f).\n", number1, number2);
		printf("\nOu seja: %.2f > %.2f\n", number1, number2);
		
	} else if (number1 < number2) {
		printf("\nO primeiro n�mero inserido (%.2f) � MENOR que o segundo n�mero inserido (%.2f).\n", number1, number2);
		printf("\nOu seja: %.2f < %.2f\n", number1, number2);
		
	} else if (number1 == number2) {
		printf("\nOs n�meros inseridos (%.2f e %.2f) possuem o mesmo valor.\n", number1, number2);
		printf("\nOu seja: %.2f = %.2f\n", number1, number2);
	} else {
		printf("(!) Os valores inseridos devem corresponder apenas a n�meros reais.");	
	}
	
	return 0;
}
