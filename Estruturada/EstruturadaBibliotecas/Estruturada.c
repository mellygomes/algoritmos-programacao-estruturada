#include <stdio.h>
#include <locale.h>
#include "funcoes.h"

	float valor1, valor2, media; 

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	cadastrar();
	fx_media();
	system("cls");
	mostrar_resultado();
	
	printf("\n\n\n\n");
	return 0;
}
