#include<stdio.h>
#include<locale.h>

char nome_cliente[50], servico1[50], servico2[50];
float preco1, preco2, total;

main(void){
	setlocale(LC_ALL, "Portuguese");
	
	//cadastro
	
	printf("Preencha as informa��es\n");
	
	printf("Digite o nome do cliente: ");
	fgets(nome_cliente, 50, stdin);
	fflush(stdin);
	
	printf("1� servi�o: ");
	fgets(servico1, 50, stdin);
	fflush(stdin);
	
	printf("pre�o do 1� servi�o: ");
	scanf("%f", &preco1);
	fflush(stdin);
	
	printf("2� servi�o: ");
	fgets(servico2, 50, stdin);
	fflush(stdin);
	
	printf("pre�o do 2� servi�o: ");
	scanf("%f", &preco2);
	fflush(stdin);
	
	total = preco1 + preco2;
	
	system("cls");
	
	//impress�o
	
	printf("Nome do cliente: %s\n", nome_cliente);
	printf("1� Servi�o: %s\n", servico1);
	printf("Pre�o: %.2f\n", preco1);	
	printf("2� Servi�o: %s\n", servico2);
	printf("Pre�o: %.2f\n", preco2);
	printf("Total a pagar: %.2f\n: ", total);
		
}
