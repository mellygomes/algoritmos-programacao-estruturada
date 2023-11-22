#include <stdio.h>
#include <string.h>
#include <locale.h>

	struct cadastro {
	char nome[50];
	char local[50];	
	};
	
	//funcoes
	void cadastrarPontoTuristico() {
		printf("\ninforme os pontos turisticos: \n\n");
				
		struct cadastro pontoTuristico1;
		printf("1º: ");
		fflush(stdin);
		gets(pontoTuristico1.local);
		
		struct cadastro pontoTuristico2;
		printf("\n2º: ");
		fflush(stdin);
		gets(pontoTuristico2.local);
		
		struct cadastro pontoTuristico3;
		printf("\n3º: ");
		fflush(stdin);
		gets(pontoTuristico3.local);
	}
	
	void cadastrarCliente() {
		printf("\ninforme os nomes dos clientes: \n\n");
		
		struct cadastro cliente1;
		printf("1º: ");
		fflush(stdin);
		gets(cliente1.nome);
		
		struct cadastro cliente2;
		printf("\n2º: ");
		fflush(stdin);
		gets(cliente2.nome);
		
		struct cadastro cliente3;
		printf("\n3º: ");
		fflush(stdin);
		gets(cliente3.nome);
	}
	
	char confirma[1];
	int optonMenu;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	do {
		
		printf("\t\tMENU\n\n");
		
		printf("[1] - Escolher ponto turístico\n[2] - Cadastrar clientes\n\n");
		printf("Selecione a opção que deseja: ");
		fflush(stdin);
		scanf("%i", &optonMenu);
		
		switch (optonMenu) {
			case 1:
				cadastrarPontoTuristico();
			break;
				
			case 2:
				cadastrarCliente();	
			break;
		}
		
		system("cls");
		printf("\n\n");
		printf("Deseja voltar ao menu? [s][n]: ");
		fflush(stdin);
		gets(confirma);
		system("cls");
		
	} while (strcmp(confirma, "s") == 0);	
	
	return 0;
}
