#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

    char retorne[30], carroSelected[40], senha[4], nomeCompletoDoCliente[80], telefoneDoCliente[16], enderecoDoCliente[80], corDoCarroSelected[30];
    char formaDePagamentoSelected[30], acessorioSelected[30];
    int optionMenuPrincipal, optionModeloCarro, optionCorDoCarro, optionFormaDePagamento, optionAcessorio, quantidadeDeAcessorios;
    float precoDoCarro;

int main() {

    setlocale(LC_ALL, "Portuguese");
    printf("\n\n");

    printf("                           ---- Bem Vindo a Concessionária CARROS ----");
    printf("\n\n");

    // verificacao da senha
    do {
        printf("Insira sua senha para continuar: ");
        fflush(stdin);
        gets(senha);

         system("cls");

        if (strcmp(senha,"123") != 0) {
            printf("\nERRO DE SENHA! TENTE NOVAMENTE\n\n");
        }

    } while (strcmp(senha,"123") != 0);

    printf("\nSENHA CORRETA!\n");
    // fim da verificacao da senha
        
    // menu inicial
    do {
        do {
            printf("\nEscolha a operação que deseja fazer: \n\n");

            printf("[1] - CADASTRO DO CLIENTE\n[2] - COMPRA DE CARRO\n[3] - COMPRA DE ACESSÓRIO\n[4] - SAIR DO PROGRAMA\n\n");
            printf("Opção: ");
            fflush(stdin);
            scanf("%i", &optionMenuPrincipal);
            system("cls");

            // modulo para opcoes do menu
            switch (optionMenuPrincipal) {

                // menu de cadastro de cliente
                case 1:
                    printf("              Insira suas informações pessoais\n\n");

                    printf("Nome completo: ");
                    fflush(stdin);
                    gets(nomeCompletoDoCliente);

                    printf("Telefone: ");
                    fflush(stdin);
                    gets(telefoneDoCliente);

                    printf("Endereço: ");
                    fflush(stdin);
                    gets(enderecoDoCliente);

                    system("cls");

                    //impressao
                    printf("\n\nCadastro realizado! Vizualize as informações: \n\n");
                    printf("Nome completo: %s\nTelefone: %s\nEndereço: %s\n\n", nomeCompletoDoCliente, telefoneDoCliente, enderecoDoCliente);

                    system("pause");
                    system("cls");
                break;
                // fim do menu de cadastro de cliente

                // menu de compra de carro
                case 2:

                    do {
                        printf("\n\n[1] - Genesis gv80\n[2] - Porsche Panamera\n[3] - Mercedes Benz GT 63S\n");
                        printf("\nEscolha o modelo do carro: ");
                        fflush(stdin);
                        scanf("%i", &optionModeloCarro);
                    
                        switch (optionModeloCarro) {
                                
                            case 1:
                                strcpy(carroSelected, "Genesis gv80");
                                precoDoCarro = 8300900;
                            break;    

                            case 2:
                                strcpy(carroSelected, "Porsche Panamera");
                                precoDoCarro = 270150;
                            break;

                            case 3:
                                strcpy(carroSelected, "Mercedes Benz GT 63S");
                                precoDoCarro = 340160;
                            break;

                            default:
                                system("cls");
                                printf("\n\nOpção Inválida! Selecione novamente:\n");
                            break;
                        }

                    } while ((optionModeloCarro < 0) || (optionModeloCarro > 4));

                    system("cls");

                    do {
                        printf("[1] - Branco\n[2] - Preto\n[3] - Vermelho");
                        printf("\n\nSelecione a cor do veículo: ");
                        fflush(stdin);
                        scanf("%i", &optionCorDoCarro);

                        switch (optionCorDoCarro) {

                            case 1:
                                strcpy(corDoCarroSelected, "Branco");
                            break;

                            case 2:
                                strcpy(corDoCarroSelected, "Preto");
                            break;

                            case 3:
                                strcpy(corDoCarroSelected, "Vermelho");
                            break;

                            default:
                                system("cls");
                                printf("\n\nOpção Inválida! Selecione novamente:\n");
                            break;
                        }

                    } while ((optionCorDoCarro < 0) || (optionCorDoCarro > 4));

                    system("cls");

                    do {
                        printf("\n\n[1] - À vista\n[2] - À prazo\n");
                        printf("Selecione a forma de pagamento que deseja: ");
                        fflush(stdin);
                        scanf("%i", &optionFormaDePagamento);

                        switch (optionFormaDePagamento) {

                            case 1:
                                strcpy(formaDePagamentoSelected, "À vista");
                            break;

                            case 2:
                                strcpy(formaDePagamentoSelected, "À prazo");
                            break;

                            default:
                                system("cls");
                                printf("\n\nOpção Inválida! Selecione novamente:\n");
                            break;
                        }

                    } while ((optionFormaDePagamento < 0) || (optionFormaDePagamento > 3));

                    // impressao
                    system("cls");

                    printf("\n\nInformações da compra\n\n");
                    printf("Modelo do veículo: %s\nCor: %s\nValor á pagar: $ %.2f\n", carroSelected, corDoCarroSelected, precoDoCarro);
                    printf("Forma de pagamento será: %s\n\n", formaDePagamentoSelected);

                    system("pause");
                    system("cls");
                break;
                // fim do menu de compra de carro

                // menu de compra de acessorio
                case 3:
                    do {
                        printf("\n\nEscolha um acessório \n\n");

                        printf("[1] - Óculos\n[2] - Bandana\n[3] - Bolsa\n[4] - Pulseira\n\n");
                        printf("Selecione a opção de acessório que deseja: ");
                        fflush(stdin);
                        scanf("%i", &optionAcessorio);

                        switch (optionAcessorio) {

                            case 1:
                                strcpy(acessorioSelected, "Óculos");
                            break;

                            case 2:
                                strcpy(acessorioSelected, "Bandana");
                            break;

                            case 3:
                                strcpy(acessorioSelected, "Bolsa");
                            break;

                            case 4:
                                strcpy(acessorioSelected, "Pulseira");
                            break;

                            default:
                                system("cls");
                                printf("\n\nOpção Inválida! Selecione novamente: \n");
                            break;
                        }

                    } while ((optionAcessorio < 0) || (optionAcessorio > 5));

                    printf("QUantos acessorios deseja?");
                    fflush(stdin);
                    scanf("%i", &quantidadeDeAcessorios);

                    // impressão
                    system("cls");

                    printf("\n\nInformações do pedido\n\n");
                    printf("Acessório escolhido: %s\nQuantidade: %i\n\n", acessorioSelected, quantidadeDeAcessorios);

                    system("pause");
                    system("cls");
                break;
                
                case 4:
                	system("cls");
                	printf("\n\n Deseja realmente sair do programa ou ");
                break;

                default:
                    system("cls");
                    printf("\n\nOpção Inválida! Selecione novamente:\n");
                break;
            }

        } while ((optionMenuPrincipal < 0) || (optionMenuPrincipal > 4));

        printf("Deseja voltar ao menu menu principal?[s] [n]: ");
        fflush(stdin);
        gets(retorne);

        system("cls");

    } while ((strcmp(retorne,"sim") == 0 || strcmp(retorne,"s") == 0) || strcmp(retorne,"S") == 0 || strcmp(retorne,"SIM") == 0);

    printf("\n\n     + PROGRAMA FINALIZADO +");

    printf("\n\n");
    return 0;
}
