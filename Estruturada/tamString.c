#include <stdio.h>
#include <locale.h>
#include <string.h>

	char palavra1[100], palavra2[100];
	unsigned tamString;
	
int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite a primeira palavra: ");
	fflush(stdin);
	scanf("%[^\n]%*c", palavra1);

	printf("Digite a segunda palavra: ");
	fflush(stdin);
	scanf("%[^\n]%*c", palavra2);
	
	tamString = strlen(palavra1);
	printf("\nTamanho da string 1 é: %u\n", tamString);
	printf("Tamanho da string 2 é: %u\n", strlen(palavra2));
		
return 0;
}
