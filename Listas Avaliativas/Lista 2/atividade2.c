#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

float a, b, c;

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	//grava��o
	
	printf("\n               ====== VERIFICAR ORDEM DECRESCENTE ======\n\n");
	
	printf("\nPrimeiro n�mero: ");
	fflush(stdin);
	scanf("%f", &a);
	
	printf("\nSegundo n�mero: ");
	fflush(stdin);
	scanf("%f", &b);
	
	printf("\nTerceiro n�mero: ");
	fflush(stdin);
	scanf("%f", &c);
	
	system("cls");
	
	//verifica��o e impress�o
	
	printf("\nOrdem decresente dos valores:\n\n");
	
	if ((a > b) && (b > c)) {
		
		printf("%.2f - MAIOR\n%.2f - M�DIO\n%.2f - MENOR", a, b, c);
		
	} else if ((a > c) && (c > b)) {
		
		printf("%.2f - MAIOR\n%.2f - M�DIO\n%.2f - MENOR", a, c, b);
		
	} else if ((b > a) && (a > c)) {
	
		printf("%.2f - MAIOR\n%.2f - M�DIO\n%.2f - MENOR", b, a, c);
		
	} else if ((b > c) && (c > a)) {
		
		printf("%.2f - MAIOR\n%.2f - M�DIO\n%.2f - MENOR", b, c, a);
		
	} else if ((b > a) && (a > c)) {
		
		printf("%.2f - MAIOR\n%.2f - M�DIO\n%.2f - MENOR", b, a, c);
		
	} else if ((c > b) && (b > a)) {
		
		printf("%.2f - MAIOR\n%.2f - M�DIO\n%.2f - MENOR", c, b, a);
		
	} else if ((c > a) && (a > b)) {
		
		printf("%.2f - MAIOR\n%.2f - M�DIO\n%.2f - MENOR", c, a, b);
	
	} else {

		printf("[!] Valor inv�lido");
	}
		
	return 0;
}
