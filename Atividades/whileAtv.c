#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

	int i, t;
	char nome[5][50], cpf[5][12], pe[5][50], pp[5][50];

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
		fgets(pe[i], 50, stdin);
		
		printf("Informe seu pp: ");
		fflush(stdin);
		fgets(pp[i], 50, stdin);
		
		system("cls");
		i++;
		t++;
	}
	
	i = 0;
	t = 1;
	while (i < 5) {
		
		t = t++;
		printf("Cadastro nº %i\n\n", t);
		printf("Nome: %s\n", nome[i]);
		printf("CPF: %s\n", cpf[i]);
		printf("pe: %s\n", pe[i]);
		printf("pp: %s\n", pp[i]);
		printf("\n-----------------------------\n\n");
		i++;
		t++;
	}
	
	return 0;
}
