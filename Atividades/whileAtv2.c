#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

	int i, t;
	float pe[5], pp[5], totalNota[5];
	char nome[5][50], cpf[5][12];

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	printf("                  Cadastro\n\n");
	
	i = 0;
	t = 1;
	while (i < 5) {
		
		printf("Cadastro nº %i\n\n", t);
		printf("Informe seu nome: ");
		fflush(stdin);
		fgets(nome[i], 50, stdin);
		
		printf("Informe seu CPF: ");
		fflush(stdin);
		fgets(cpf[i], 12, stdin);
		
		printf("Informe seu pe: ");
		fflush(stdin);
		scanf("%f", &pe[i]);
		
		printf("Informe seu pp: ");
		fflush(stdin);
		scanf("%f", &pp[i]);		
		system("cls");
		i++;
		t++;
	}
	
	i = 0;
	t = 1;
	while (i < 5) {
		
		totalNota[i] = pe[i] + pp[i];
		
		printf("Cadastro nº %i\n\n", t);
		printf("Nome: %s", nome[i]);
		printf("CPF: %s", cpf[i]);
		printf("pe: %.1f\n", pe[i]);
		printf("pp: %.1f\n", pp[i]);
		printf("Total de notas: %.1f\n", totalNota[i]);
		
		if (totalNota[i] >= 160) {
			printf("Resultado final: Classificado(a).\n");
			
		} else if (totalNota[i] < 160) {
			printf("Resultado final: Não classificado(a).\n");
			
		}
		
		printf("\n-----------------------------------\n\n");
		i++;
		t++;
	}
	
	return 0;
}
