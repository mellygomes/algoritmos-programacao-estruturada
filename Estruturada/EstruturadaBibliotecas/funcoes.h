#include <stdio.h>
#include <locale.h>

	float valor1, valor2, media;

	void cadastrar() { // fun��o: cadastrar dois valores
		printf("Digite o primeiro valor: ");
		fflush(stdin);
		scanf("%f", &valor1);
		
		printf("Digite o primeiro valor: ");
		fflush(stdin);
		scanf("%f", &valor2);
	}
	
	void fx_media() { // fun��o que  calcula a m�dia
		
		media = (valor1 + valor2) / 2;
	}
	
	void mostrar_resultado() { // fun��o que imprime
		
		printf("\n------------------------------\n");
		printf("\n\nA m�dia �: %.1f\n", media);
		
		if ((media >= 7) && (media <= 10)) {
			
			printf("Resultado: Aprovado");
			
		} else if ((media < 7) && (media >= 0)) {
			
			printf("Resultado: Reprovado");
			
		} else {
			
			printf("[!]");
			
		}
	}
