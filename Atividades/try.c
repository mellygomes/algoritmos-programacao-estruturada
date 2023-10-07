#include<stdio.h>
#include<locale.h>

char nomeCompleto[50], cpf[14], triagem1[100], triagem2[100], nomeDoutor[50], esp[30];
float v1, v2;
int dia[2], mes[2], hora[2], min[2];

main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	//cadastro do paciente
	
	printf("----- CADASTRO DE CONSULTA -----/n");
	printf("\n");
	
	printf("Nome completo do paciente: ");
	fflush(stdin);
	gets(nomeCompleto);
	printf("\n");
	
	printf("Insira o CPF: ");
	fflush(stdin);
	gets(cpf);
	printf("\n");
	
	printf("1º Consulta");
	printf("\n");
	
	printf("Motivo para a consulta (triagem): ");
	fflush(stdin);
	gets(triagem1);
	
	printf("Valor: ");
	scanf("%f", &v1);
	fflush(stdin);
	printf("\n");
	
	printf("2º Consulta");
	printf("\n");
	
	printf("Motivo para a consulta (triagem): ");
	fflush(stdin);
	gets(triagem2);
	
	printf("Valor: ");
	fflush(stdin);
	scanf("%f", &v2);
	
	system("cls");
	
	//cadastro do doutor
	
	printf("Preencha as informações do doutor(a): \n");
	printf("\n");
	
    printf("Nome do doutor(a): ");
    fflush(stdin);
    gets(nomeDoutor);
    
    
    printf("Qual a especialização: ");
    fflush(stdin);
    gets(esp);
    printf("\n");
    
    //marcação da consulta
    
    printf("Dia: ");
    fflush(stdin);
    scanf("%i", &dia);
    
    printf("/");
    fflush(stdin);
    scanf("%i", &mes);
    
    printf("Horário: ");
    fflush(stdin);
    scanf("%i", &hora);
    
    printf(":");
    fflush(stdin);
    scanf("%i", &min);
    
	
	//impressão
	
	printf("Paciente: %s\n", nomeCompleto);
	printf("N° de CPF: %s\n", cpf);
	printf("Triagem da consulta N° 1: %s\n", triagem1);
	printf("valor da 1ª colsulta: %f\n", v1);
	printf("Triagem da consulta N° 2: %s\n", triagem2);
	printf("valor da 1ª colsulta: %f\n", v2);
	printf("Marcada com o(a) doutor(a) especializado em %s: %s\n", esp, nomeDoutor);
	printf("Data da consulta: Dia %i - %i ás %i:%i", dia, mes, hora, min);
	
	return 0;
	
}
