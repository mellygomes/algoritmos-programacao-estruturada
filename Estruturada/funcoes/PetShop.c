#include <stdio.h>

	char nomeCompleto[50], email[30], telefone[10], endereco[50], interesse[80];
	int opcaoDeCadastramento;
	
	void cadastrarCliente() {
	
		printf("\n	Faça seu cadastro\n\n");	
		
		printf("	Nome completo do tutor do animal: ");
		fflush(stdin);
		gets(nomeCompleto);
		
		printf("	E-mail: ");
		fflush(stdin);
		gets(email);
		
		printf("	Telefone: ");
		fflush(stdin);
		gets(telefone);
		
		printf("	Endereço: ");
		fflush(stdin);
		gets(endereco);
		
		system("cls");
	}
	
	void cadastrarFornecedor() {
	
		printf("\n	Faça seu cadastro\n\n");	
		
		printf("	Nome da empresa: ");
		fflush(stdin);
		gets(nomeCompleto);
		
		printf("	E-mail de contato: ");
		fflush(stdin);
		gets(email);
		
		printf("	Telefone de contato: ");
		fflush(stdin);
		gets(telefone);
		
		printf("	Endereço: ");
		fflush(stdin);
		gets(endereco);
		
		printf("	Interesse: ");
		fflush(stdin);
		gets(interesse);
		
		system("cls");
	}
	
	void imprimirCliente() {
		
		printf("\n\n						CADASTRO\n\n");
		
		printf("	Tutor do animal: %s\n", nomeCompleto);
		printf("	E-mail: %s\n", email);
		printf("	Telefone: %s\n", telefone);
		printf("	Endereço: %s\n", endereco);
	}
	
	void imprimirFornecedor() {
		
		printf("\n\n						CADASTRO\n\n");
		
		printf("	Empresa: %s\n", nomeCompleto);
		printf("	E-mail: %s\n", email);
		printf("	Telefone: %s\n", telefone);
		printf("	Endereço: %s\n", endereco);
		printf("	Interesse: %s", interesse);
	}

int main() {
	
	printf("\n\n                            PET SHOP\n\n");
	
	int opcaoDeCadastramento;
	
	printf("	[1] - Cliente	[2] - Fornecedor\n");
	printf("	Opção que deseja cadastrar: ");
	fflush(stdin);
	scanf("%i", &opcaoDeCadastramento);
	
	switch (opcaoDeCadastramento) {
		
		case 1:
			cadastrarCliente();
			imprimirCliente();
			break;
			
		case 2:
			cadastrarFornecedor();
			imprimirFornecedor();
			break;

	}
	
	printf("\n\n");
	return 0;
}
