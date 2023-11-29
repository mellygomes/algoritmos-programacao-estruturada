#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int opcaoMenuPrincipal, i = 0, n = 0;
char senha[7], nomeCliente[50];

// funcao para o titulo
void titulo() {
	printf("\n\n\t\t\t === BEM VINDO AO SUPER PETSHOP ELY APE ===\n\n");
}

// Funcao para fazer a verificacao de correspondencia de senha
void verificar_senha() {
    do {
        printf("\n\nInsira sua senha para iniciar: ");
        fflush(stdin);
        gets(senha);

        if (strcmp(senha, "patinha") == 0) {
            system("cls");
            printf("Senha Correta!");
            system("cls");
        
        } else if (strcmp(senha, "patinha") != 0) {
            system("cls");
            printf("\nSenha Incorreta! Tente novamente: \n");
        }

    } while (strcmp(senha, "patinha") != 0);
}

// Struct para funcao cadastrar
//struct cadastro {
//    char nomeCliente[50], nomePet[50], tel[15];
//};

// funcao para cadastrar cliente
void cadastrar() { //struct cadastro *cadastro) {
    printf("Insira as informações do cliente\n\n");
    printf("Nome do Tutor: ");
    fflush(stdin);
    fgets(nomeCliente, 50, stdin);
    //fgets(cadastro->nomeCliente, 50, stdin);

    // printf("Nome do Animal: ");                                  !
    // fflush(stdin);
    // fgets(cadastro->nomePet, 50, stdin);

    // printf("Telefone: ");                                        !
    // fflush(stdin);
    // fgets(cadastro->tel, 50, stdin);
} 

// funcao para imprimir o cadastro de cliente 
void imprimirRelatorioGeral() { //struct cadastro *clientes) {

    printf("\n\nCliente %i:\n", n + 1);
    printf("Nome do tutor: %s", nomeCliente[n]); //[i].nomeCliente);
    // printf("\nNome do animal: %s", clientes[i].nomePet);         !
    // printf("\nTelefone: %s", clientes[i].tel);                   !
}

/* Funcao para o menu principal
A funcao menu_principal sera chamada novamente ao final de cada case do switch para 
que o usuario volte ao menu assim como foi definido na lista, com execao da opcao 5
onde o usuario podera finalizar o programa (quero dizer que o loop e de proposito ;-;)*/
//struct cadastro clientes[3];
void menu_principal() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n\n\t\t\t === BEM VINDO AO SUPER PETSHOP ELY APE ===\n\n");

    printf("[1] - Cadastrar Cliente\n[2] - Agendar banho ou tosa\n[3] - Consulta\n");
    printf("[4] - Imprimir Relatório Geral\n[5] - Sair e Finalizar\n\n");

    printf("Digite o número correspondente a opção que deseja: ");
    fflush(stdin);
    scanf("%i", &opcaoMenuPrincipal);

    switch (opcaoMenuPrincipal) {

        case 1:
//        	printf("\nQuantos clientes deseja cadastrar? (MAX 10): ");
//        	fflush(stdin);
//        	scanf("%i", &numDeCadastros);

//            for (n = 0; n < numDeCadastros; n++) {
				n = 0;
                system("cls");
                printf("\n\nCliente %i:\n", n + 1);
                cadastrar(); //(&clientes[n]);
                system("cls");
                n++;
//            }

            // system("cls");
            // printf("\n\nCliente %i:\n", i + 1);
            // cadastrar(&clientes[n]);
            // system("cls");
            
            system("cls");
            menu_principal();
        break;

        case 2:
            printf("2");
            system("cls");
            printf("Fim da seção!");
            menu_principal();
        break;

        case 3:
            printf("3");
            system("cls");
            printf("Fim da seção!");
            menu_principal();
        break;
        
        case 4:
            system("cls");
            	titulo();
            	printf("\n\t\tClientes cadastrados");
            i = 0;
        	for (i = 0; i <= n ; i++) {
                imprimirRelatorioGeral(); //(&clientes[i]);
                printf("\n------------------------------------------");
        	}

            printf("\n\n");
            system("pause");
            system("cls");
            menu_principal();
        break;

        case 5:
            printf("5");
            system("cls");
            printf("Fim da seção!");
        break;
        
        default:
            printf("default");
            system("cls");
            printf("Fim da seção!");
            menu_principal();
        break;
    }
}

// funcao principal
int main() {
    setlocale(LC_ALL, "Portuguese");
    verificar_senha();
    menu_principal();

    return 0;
}
