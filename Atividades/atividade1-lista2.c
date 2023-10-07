#include<stdio.h>
#include<locale.h>
#include<string.h>

float number1, number2;

main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n                -------- VERIFICAÇÃO DE NÚMEROS --------\n");
	printf("\n");
	
//	gravação dos números
	
	printf("Digite o 1º número:\n");
	fflush(stdin);
	scanf("%f", &number1);
	
	printf("DIgite o 2º número:\n");
	fflush(stdin);
	scanf("%f", &number2);
	
	system("cls");
	
//	verificação e impressão
	
	if (number1 > number2){
		printf("\nO primeiro número inserido (%.2f) é MAIOR que o segundo número inserido (%.2f).\n", number1, number2);
		printf("\nOu seja: %.2f > %.2f\n", number1, number2);
		
	}else if (number1 < number2){
		printf("\nO primeiro número inserido (%.2f) é MENOR que o segundo número inserido (%.2f).\n", number1, number2);
		printf("\nOu seja: %.2f < %.2f\n", number1, number2);
		
	}else if (number1 == number2){
		printf("\nOs números inseridos (%.2f e %.2f) possuem o mesmo valor.\n", number1, number2);
		printf("\nOu seja: %.2f = %.2f\n", number1, number2);
	}else{
		printf("(!) Os valores inseridos devem corresponder apenas a números reais.");	
	}
	
	return 0;
}
