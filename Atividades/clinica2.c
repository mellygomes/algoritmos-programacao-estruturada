#include<stdio.h>
#include<locale.h>

char nome_cliente[50], servico1[50], servico2[50];
float preco1, preco2, total;

main(void){
	setlocale(LC_ALL, "Portuguese");
	
	//cadastro
	
	printf("Preencha as informações\n");
	
	printf("Digite o nome do cliente: ");
	fgets(nome_cliente, 50, stdin);
	fflush(stdin);
	
	printf("1° serviço: ");
	fgets(servico1, 50, stdin);
	fflush(stdin);
	
	printf("preço do 1° serviço: ");
	scanf("%f", &preco1);
	fflush(stdin);
	
	printf("2° serviço: ");
	fgets(servico2, 50, stdin);
	fflush(stdin);
	
	printf("preço do 2° serviço: ");
	scanf("%f", &preco2);
	fflush(stdin);
	
	total = preco1 + preco2;
	
	system("cls");
	
	//impressão
	
	printf("Nome do cliente: %s\n", nome_cliente);
	printf("1° Serviço: %s\n", servico1);
	printf("Preço: %.2f\n", preco1);	
	printf("2° Serviço: %s\n", servico2);
	printf("Preço: %.2f\n", preco2);
	printf("Total a pagar: %.2f\n: ", total);
		
}
