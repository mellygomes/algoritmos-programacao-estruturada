#include<stdio.h>
#include<stdlib.h>

struct  cadastro {
	char nome[50];
	char cpf[20];
	int tel;
};

int main() {
	printf("\n\n");
	
	struct cadastro passageiro1;
	printf("Digite o nome: ");
	fflush(stdin);
	gets(passageiro1.nome);
	
	printf("CPF: ");
	fflush(stdin);
	gets(passageiro1.cpf);
	
	printf("Telefone: ");
	fflush(stdin);
	scanf("%i", &passageiro1.tel);
	
	system("cls");
	
	struct cadastro passageiro2;
	printf("Digite o nome: ");
	fflush(stdin);
	gets(passageiro2.nome);
	
	printf("CPF: ");
	fflush(stdin);
	gets(passageiro2.cpf);
	
	printf("Telefone: ");
	fflush(stdin);
	scanf("%i", &passageiro2.tel);
	
	system("cls");
	
	printf("\n\n");
	printf("\t\tCADASTRO\n\n");
	
	printf("Nome: %s\nCPF: %s\nTel: %i\n\n", passageiro1.nome, passageiro1.cpf, passageiro1.tel);
	printf("Nome: %s\nCPF: %s\nTel: %i\n\n", passageiro2.nome, passageiro2.cpf, passageiro2.tel);
	
	return 0;
}

/*
ESTRUCT
Uma memória própria que pode ser usada várias vezes, como um grupo de variáveis
*/
