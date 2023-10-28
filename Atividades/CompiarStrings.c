#include <stdio.h>
#include <locale.h>
#include <string.h>

	char original[100], copia[100];
	
int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite a 1º palavra: ");
	scanf("%[^\n]%*c", original);
	
	//strcpy copiar strings
	strcpy(copia, original);
	
	printf("A original e: %s\n", original);
	printf("A copia e: %s\n", copia);
	
	getch();
	return 0;
}
