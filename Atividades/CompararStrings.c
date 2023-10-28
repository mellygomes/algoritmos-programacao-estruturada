#include <stdio.h>
#include <locale.h>
#include <string.h>

	char nome1[100], nome2[100];
	
int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite a 1º palavra: ");
	scanf("%[^\n]%*c", nome1);
	
	printf("Digite a 2º palavra: ");
	scanf("%[^\n]%*c", nome2);
	
	//strcmp comparar strings
	
	if (strcmp(nome1, nome2) ==  0) {
		printf("\nNomes iguais");
		
	} else if (strcmp(nome1, nome2) < 0) {
		printf("%s vem primeiro na lista", nome1);
		
	} else {
		printf("%s vem primeiro na lista", nome1);
	}
	
	return 0;
}
