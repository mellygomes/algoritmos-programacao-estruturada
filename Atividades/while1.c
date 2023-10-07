#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

	int i, idade[3];

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	printf("\n\n");
	
	while (i < 3) { 
	
	printf("Iforme sua idade: ");
	fflush(stdin);
	scanf("%i", &idade[i]);
	i++;
	
	}
	
	system("cls");
	printf("\n\n");
	
	i = 0;
	while (i < 3) {
		
		printf("Idade: %i\n", idade[i]);	
		i++;
	}
	
	return 0;
}
