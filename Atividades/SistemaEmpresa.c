#include<stdio.h>
#include<locale.h>
#include<string.h>

char end[50], cnpj[40], empNome[50], tel[13];
float rNovos, rSeminovos, media, total;

main(void){
	
	setlocale(LC_ALL, "portuguese");
	
	//CADASTRO
	
	printf("=========== 	SISTEMA DE EMPRESA      ============\n");
	printf("\n");
	
	printf("Nome da empresa: ");
	fflush(stdin);
	gets(empNome);
	
	printf("Endereço: ");
	fflush(stdin);
	gets(end);
	
	printf("Telefone: ");
	fflush(stdin);
	scanf("%i", &tel);
	
	printf("CNPJ: ");
	fflush(stdin);
	scanf("cnpj");
	printf("\n");
	
	printf("=== Renda dos Setores: ===\n");
	printf("\n");
	
	printf("Renda do setor: ");
	fflush(stdin);
	scanf("%f", &rNovos);
	
	printf("Renda dos usados: ");
	fflush(stdin);
	scanf("%f", &rSeminovos);
	
	media = (rNovos + rSeminovos) / 2;
	total = (rNovos + rSeminovos);
	
	system("cls");
	
	//IMPRESSÃO
	
	printf("________________________________________________________________________________\n");
	printf("|     Empresa: %s      |Tipo:     ", empNome);
	
	if((total >= 0) && (total <= 10000)){
		printf("Micro Empresa     \n");
		
	}else if ((total > 10000) && (total < 50000)){
		printf("Empresa de Porte Médio     \n");
		
	}else if(total > 50000){
		printf("Empresa de Grande Porte     \n");
	}else{
		printf("O valor era inválido");
	}
	
	printf("________________________________________________________________________________\n");
	printf("|     Média de Renda: %.2f     \n",media);
	
	printf("________________________________________________________________________________\n");
	printf("|     Telefone: %s     |Total: %.2f     \n", tel, total);
	
	printf("________________________________________________________________________________\n");
	printf("|     CNPJ: %s      |Total de Novos: %.2f    \n", cnpj, rNovos);
	
	printf("________________________________________________________________________________\n");
	printf("|     Endereço: %s     |Total de Seminovos: %.2f     \n", end, rSeminovos);
	
	
	
	
	//FIM
	
	return 0;
	system("pause");
	
}
