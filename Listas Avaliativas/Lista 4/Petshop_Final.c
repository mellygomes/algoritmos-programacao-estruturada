#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

// declaracoes globais
char senha[10], nomePetAgendamento[10][50];
char opcaoDeAgendamentoSelecionada[10][50], opcaoDeDataDeConsultaSelecionada[10][50];
char opcaoDeClienteSelecionado[10][50], opcaoDeDoutorSelecionado[10][50];
int opcaodoMenu, opcaoDeCliente, opcaoDeDoutor;
int contClientes = 0, contAngendamento = 0, contConcultas = 0;

//apresentar o titulo
void apresentar_titulo() {
    printf("\n\n\t\t\t (^-^) * Super_Petshop_Emanuelly_CC * (^-^)\n\n");
}

// fucao para verificar correpodencia de senha
void verificar_senha() {
    setlocale(LC_ALL, "Portuguese");
    do {
        printf("Insira sua senha para iniciar: ");
        fflush(stdin);
        gets(senha);

        if (strcmp(senha, "patinha") == 0) {
            system("cls");
            printf("Senha Correta!");
            system("cls");
        
        } else if (strcmp(senha, "patinha") != 0) {
            system("cls");
            apresentar_titulo();
            printf("\n[!] Senha Incorreta! Tente novamente \n\n");
        }

    } while (strcmp(senha, "patinha") != 0);
}

// struct para o cadastro de cliente
struct cadastro {
    char nomeCliente[50];
    char nomePet[50];
    char tel[20];
};

//funcao para cadastrar cliente (referente a opcao 1 do menu principal)
void emanuelly(struct cadastro cliente[], int contClientes) {
    setlocale(LC_ALL, "Portuguese");
    printf("Cliente %i\n", contClientes + 1);
    printf("Nome: ");
    fflush(stdin);
    gets(cliente[contClientes].nomeCliente);

    printf("Nome do Pet: ");
    fflush(stdin);
    gets(cliente[contClientes].nomePet);

    printf("Telefone para contato: ");
    fflush(stdin);
    gets(cliente[contClientes].tel);
}

// funcao para o agendamento de servico (referente a opcao 2 do menu principal)
void agendamento() {
    setlocale(LC_ALL, "Portuguese");
    int opcaoDeAgendamento;
    system("cls");
    apresentar_titulo();

    printf("Nome do Pet para o serviço: ");
    fflush(stdin);
    fgets(nomePetAgendamento[contAngendamento], 50, stdin);

    do {
        printf("\nOpções de agendamento para o Pet: %s\n", nomePetAgendamento[contAngendamento]);
        printf("[1] - Banho\n");
        printf("[2] - Tosa\n");
        printf("[3] - Banho e tosa\n");
        printf("Informe a opção que deseja: ");
        fflush(stdin);
        scanf("%i", &opcaoDeAgendamento);

        switch (opcaoDeAgendamento) {   // modulo para escolha do agendamento
            case 1:
                strcpy(opcaoDeAgendamentoSelecionada[contAngendamento], "Banho");
            break;

            case 2:
                strcpy(opcaoDeAgendamentoSelecionada[contAngendamento], "Tosa");
            break;

            case 3:
                strcpy(opcaoDeAgendamentoSelecionada[contAngendamento], "Banho e tosa");
            break;
            
            default:
                system("cls");
                apresentar_titulo();
                printf("\n[!] Op��o inv�lida! Tente novamente\n");
            break;
        }

    } while ((opcaoDeAgendamento <= 0) || (opcaoDeAgendamento > 3));

}

// funcao para marcacao de cconsulta (referente a opcao 3 do menu principal)
void marcar_data_da_consulta() {
    setlocale(LC_ALL, "Portuguese");
    // system("cls");
    int opcaoDeConsulta;
    apresentar_titulo();
    do {
        printf("Datas dispon�veis para consulta\n");
        printf("[1] - Quarta-feira\n");
        printf("[2] - S�bado\n\n");
        printf("Informe a op��o que deseja: ");
        fflush(stdin);
        scanf("%i", &opcaoDeConsulta);

        switch (opcaoDeConsulta) {  // modulo de escolha da data para consulta
            case 1:
                strcpy(opcaoDeDataDeConsultaSelecionada[contConcultas], "Quarta-feira");
            break;

            case 2:
                strcpy(opcaoDeDataDeConsultaSelecionada[contConcultas], "S�bado");
            break;
            
            default:
                system("cls");
                apresentar_titulo();
                printf("\n[!] Op��o inv�lida! Tente novamente\n\n");
            break;
        }

    } while ((opcaoDeConsulta <= 0) || (opcaoDeConsulta > 2));
}

// funcao para impressao do relatorio geral (referente a opcao 4 do menu principal)
void imprimir_relatorio_geral(struct cadastro cliente[]) {
    setlocale(LC_ALL, "Portuguese");
    apresentar_titulo();

    // -> referente impressao de cadastro de clientes
    printf("\n\t+++ CLIENTES CADASTRADOS +++\n");
    int i = 0;

    if (contClientes == 0) {
        printf("\nNenhum cliente foi cadastrado\n\n");
        printf("-----------------------------------------");
    } else {
        for (i = 0; i < contClientes; i++) {
            printf("\nNome do tutor: %s\n", cliente[i].nomeCliente);
            printf("Nome do pet: %s\n", cliente[i].nomePet);
            printf("Telefone para contato: %s\n", cliente[i].tel);
            printf("-----------------------------------------");         
        }
    }

    // -> referente impressao de agendamento
    printf("\n\n\t+++ AGENDAMENTOS +++\n");

    if (contAngendamento == 0) {
        printf("\nNenhum agendamento foi feito\n\n");
        printf("-----------------------------------------");
    } else {
        for (i = 0; i < contAngendamento; i++) {
            printf("\nAgendamento de: %s", opcaoDeAgendamentoSelecionada[i]);
            printf("\nPara o Pet %s", nomePetAgendamento[i]);
            printf("-----------------------------------------");
        }
    }

    // -> referente a impressao de consultas
    printf("\n\n\t+++ CONSULTAS +++\n");

    if (contConcultas == 0) {
        printf("\nNenhuma consulta foi marcada\n\n");
        printf("-----------------------------------------");
    } else {
        for (i = 0; i < contConcultas; i++) {
            printf("\nDia da consulta: %s\n", opcaoDeDataDeConsultaSelecionada[i]);
            printf("Para: %s\n", opcaoDeClienteSelecionado[i]);
            printf("Com: %s\n", opcaoDeDoutorSelecionado[i]);
            printf("-----------------------------------------");         
        }
    }
}

// funcao do menu principal
void menu_principal(struct cadastro cliente[]) {
    setlocale(LC_ALL, "Portuguese");
    int i = 0;
    apresentar_titulo();
    do {
        printf("[1] - Cadastrar Cliente\n");
        printf("[2] - Agendar banho ou tosa\n");
        printf("[3] - Consulta\n"); 
        printf("[4] - Imprimir Relatório Geral\n");
        printf("[5] - Sair e Finalizar\n\n");
        printf("Informe a opção que deseja: ");
        fflush(stdin);
        scanf("%i", &opcaodoMenu);

        switch (opcaodoMenu) { // modulo para escolha das opcoes do menu
            case 1:
                if (contClientes < 10) {
                    system("cls");
                    apresentar_titulo();
                    printf("Preencha as informa��es\n\n");
                    emanuelly(cliente, contClientes);
                    contClientes++;
                    system("cls");
                    apresentar_titulo();

                } else {
                    system("cls");
                    apresentar_titulo();
                    printf("\n[!] Limite excedido!\n\n");
                }
            break;

            case 2:
                if (contAngendamento < 10) {
                    agendamento();
                    contAngendamento++;
                    system("cls");
                    apresentar_titulo();

                } else {
                    system("cls");
                    apresentar_titulo();
                    printf("\n[!] Limite excedido!\n\n");
                }
            break;

            case 3:
                if (contConcultas < 10) {
                    system("cls");
                    marcar_data_da_consulta(cliente, contAngendamento);

                    if (contClientes == 0) {
                        system("cls");
                        apresentar_titulo();
                        printf("[!] Nenhum cliente foi cadastrado ainda. Cadastre um cliente primeiro\n\n");
                    } else {

                        do {
                            printf("\nLista de clientes cadastrados:\n\n");
                            for (i = 0; i < contClientes; i++) {
                                printf("[%i] - %s\n", i + 1, cliente[i].nomeCliente);    
                            }

                            printf("Informe o numero do cliente para o qual deseja marcar a consulta: ");
                            fflush(stdin);
                            scanf("%i", &opcaoDeCliente);

                            if ((opcaoDeCliente < 1) || (opcaoDeCliente - 1 >= contClientes)) {
                                system("cls");
                                apresentar_titulo();
                                printf("[!] Opcão Iválida! Tente novamente\n");
                            }

                        } while ((opcaoDeCliente < 1) || (opcaoDeCliente - 1 >= contClientes));

                        strcpy(opcaoDeClienteSelecionado[contConcultas], cliente[opcaoDeCliente - 1].nomeCliente);

                        system("cls");
                        apresentar_titulo();
                        do {
                            printf("Marcar consulta %s para: %s com:", opcaoDeDataDeConsultaSelecionada[contConcultas], opcaoDeClienteSelecionado[contConcultas]);
                            printf("\n[1] - Dra. Emanuelly");
                            printf("\n[2] - Dr. Fabiano\n");
                            printf("Informe a op��o que deseja: ");
                            fflush(stdin);
                            scanf("%i", &opcaoDeDoutor);

                            switch (opcaoDeDoutor) {
                                case 1:
                                    strcpy(opcaoDeDoutorSelecionado[contConcultas], "Dra. Emanuelly");
                                break;

                                case 2:
                                    strcpy(opcaoDeDoutorSelecionado[contConcultas], "Dr. Fabiano");
                                break;

                                default:
                                    system("cls");
                                    apresentar_titulo();
                                    printf("\n[!] Opc�o inv�lida! tente novamente\n\n");
                                break;
                            }

                        } while ((opcaoDeDoutor != 1) && (opcaoDeDoutor != 2));

                        printf("\n\n");
                        contConcultas++;
                        system("cls");
                        apresentar_titulo();
                    }
                
                } else {
                    system("cls");
                    apresentar_titulo();
                    printf("\n[!] Limite excedido!\n\n");
                }
            break;

            case 4:
                system("cls");
                imprimir_relatorio_geral(cliente);
                printf("\n\n");
                system("pause");
                system("cls");
                apresentar_titulo();
            break;

            case 5:
                system("cls");
                printf("\n\n\t\tVolte sempre ao Super_Petshop_Emanuelly_CC\n\n");
            break;

            default:
                system("cls");
                apresentar_titulo();
                printf("\n[!] Op��o inv�lida! Tente novamente\n\n");
            break;
        }

    } while (opcaodoMenu != 5);
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    struct cadastro cliente[10];

    apresentar_titulo();
    verificar_senha();
    menu_principal(cliente);

    return 0;
}
