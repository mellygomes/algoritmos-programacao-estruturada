#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

	int i;
	char nome[50], opcao='s';
	
int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n\n==========CADASTRO=========\n\n");
	
	while ((opcao == 's') || (opcao == 'S')) {
		
	printf("Nome: ");
	fflush(stdin);
	gets(nome[i]);
	system("cls");
	
	//	 IMPRESSÃO
	
	printf("Nome: %s\n", nome[i]);
	printf("Cadastrar novamente? [n][s]: ");
	fflush(stdin);
	gets(opcao);
	
	}
	
	return 0;
}
