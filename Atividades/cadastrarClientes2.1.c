#include<stdio.h>
#include<locale.h>

int i;
float preco, desconto, custDesconto;
char nome[50], banco[40], cpf[15], tel[15], prod[50];

main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("         ===== Cadastrar três clientes =====\n\n");
	
	for (i = 1; 1 <= 3; i++){
	
	printf("Nome do cliente: ");
	fflush(stdin);
	fgets(nome, 50, stdin);
	
	printf("Banco: ");
	fflush(stdin);
	fgets(banco, 40, stdin);
	
	printf("CPF: ");
	fflush(stdin);
	fgets(cpf, 15, stdin);
	
	printf("Telefone: ");
	fflush(stdin);
	fgets(tel, 15, stdin);
	
	printf("______________\n");
	printf("Produto: ");
	fflush(stdin);
	fgets(prod, 50, stdin);
	
	printf("Custo: R$");
	fflush(stdin);
	scanf("%f", &preco);
	
	}
	
	system("cls");
	
	printf("Nome do cliente: %s\n", nome);
	printf("Banco: %s\n", banco);
	printf("CPF: %s", cpf);
	printf("Telefone: %s\n", tel);
	printf("Produto: %s\n", prod);
	printf("Custo: R$ %.2f\n", preco);
	
	if (preco > 300){
		
		desconto = preco * 0,4;
		custDesconto = preco - desconto;
		printf("Custo com desconto para compras acima de R$ 300,00: %.2f", custDesconto);
		
	}

	return 0;
}
