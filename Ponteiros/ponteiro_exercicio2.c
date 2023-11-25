#include <stdio.h>
#include <locale.h>

float produto1, produto2, total;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("\t\t ==== COMPRA ====");
	
	printf("Insira os valores dos produtos\n\n");
	printf("1º Produto: ");
	fflush(stdin);
	scanf("%f", &produto1);

	printf("2º Produto: ");
	fflush(stdin);
	scanf("%f", &produto2);
	
	float *p_produto1 = &produto1, *p_produto2 = &produto2;
	total = *p_produto1 + *p_produto2;
	float *p_total = &total;
	
	printf("valor final á pagar: %.2f", *p_total);
	
	return 0;
}
