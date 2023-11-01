#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

	char nome[100];
	int i;
	
int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um nome: ");
	fflush(stdin);
	gets(nome);
	
	// converter string para minusculas
	for (i = 0; nome[i]; i++) {
		
		nome[i] = tolower(nome[i]);	
	}
	
	printf("\nO nome em minusculo é: %s\n", nome);
	
	// converter a string para maiusculo
	printf("Digite um nome: ");
	fflush(stdin);
	gets(nome);
	
	// converter string para minusculas
	for (i = 0; nome[i]; i++) {
		
		nome[i] = toupper(nome[i]);	
	}
	
	printf("\nO nome em maiusculo é: %s\n", nome);	

	return 0;
}
