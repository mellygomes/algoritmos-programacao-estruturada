#include <stdio.h>
#include <locale.h>
#include <string.h>

	char profissao1[100], profissao2[100], profissao3[100];
	int numProfissao1, numProfissao2, numProfissao3;
	
int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	//CADASTRO
	printf("Informe a 1ª profissão: ");
	fflush(stdin);
	fgets(profissao1, 100, stdin);

	printf("Informe a 2ª profissão: ");
	fflush(stdin);
	fgets(profissao2, 100, stdin);
	
	printf("Informe a 3ª profissão: ");
	fflush(stdin);
	fgets(profissao3, 100, stdin);	
	
	numProfissao1 = strlen(profissao1)-1;
	numProfissao2 = strlen(profissao2)-1;
	numProfissao3 = strlen(profissao3)-1;
	
	//IMPRESSAO
	printf("\nProfissão 1 (número de letras): %i letra(s)\n", numProfissao1);
	printf("Profissão 2 (número de letras): %i letra(s)\n", numProfissao2);
	printf("Profissão 3 (número de letras): %i letra(s)\n", numProfissao3);
	
	return 0;
}
