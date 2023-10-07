#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

	int numero;

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	numero = 1;
	
	while (numero <= 3) {
		printf("\n\nNúmero: %i\n\n", numero);
		numero++;
	}
	
	return 0;
}
