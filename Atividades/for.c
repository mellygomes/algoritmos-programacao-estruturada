#include<stdio.h>
#include<locale.h>

int i;
char tel[15], nome[50], end[50], ref[70];


main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	for (i = 1; i <= 2; i++){
		
		printf("Nome do fornecedor: ");
		fflush(stdin);
		fgets(nome, 50, stdin);
		
		printf("Endereço: ");
		fflush(stdin);
		fgets(end, 50, stdin);
		
		printf("Telefone: ");
		fflush(stdin);
		fgets(tel, 15, stdin);
		
		printf("Ponto de referência: ");
		fflush(stdin);
		fgets(ref, 70, stdin);
		
		printf("\n_________________________\n\n");
		
	}
	
	system("cls");
	
	printf("____________________________\n");
	printf("\nNome do Fornecedor: %s", nome);
	printf("Endereço: %s", end);
	printf("Telefone: %i\n", tel);
	printf("Ponto de referência: %s", ref);
	printf("____________________________\n\n");
	
	return 0;
}
