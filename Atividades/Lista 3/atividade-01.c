#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

    char retorne[30], carroSelected[40];
    int senha, option, optionModeloCarro;

int main() {

    setlocale(LC_ALL, "Portuguese");
    printf("\n\n");

    printf("                           ---- Bem Vindo a Concessionária CARROS ----");
    printf("\n\n");

    printf("Insira sua senha para continuar: ");
    fflush(stdin);
    scanf("%i", &senha);

    system("cls");

    if (senha == 123) {

        do {

            printf("Escolha a operação que deseja fazer: \n\n");

            printf("[1] - CADASTRO DO CLIENTE\n[2] - COMPRA DE CARRO\n[3] - COMPRA DE ACESSÓRIO\n\n");
            printf("Opção: ");
            fflush(stdin);
            scanf("%i", &option);

                switch (option) {

                    case 1:

                        printf("Escolha o modelo do carro: \n\n");
                        fflush(stdin);
                        scanf("%s", &optionModeloCarro);

                        switch (optionModeloCarro) {

                        case 1:
                            strcpy(carroSelected, 'seilaporenquanto');
                            break;
                        
                        default:
                            break;
                        }


                        printf("Deseja voltar ao menu para uma compra? [s] [n]");
                        fflush(stdin);
                        gets(retorne);

                    break;

                }

        } while ((strcmp (retorne,"sim") == 0 || strcmp (retorne,"s") == 0));

        printf("PROGRAMA FINALIZADO");

    }

    printf("\n\n");
    return 0;
}