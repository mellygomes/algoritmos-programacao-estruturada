#include<stdio.h>
#include<locale.h>
#include<string.h>

enum Ano {janeiro, fevereiro, marco, abril, maio, junho, julho, agosto, setembro, outubro, novembro, dezembro};
int mes;

main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	enum Ano mes;
	printf("Escolha um mês:\n\n[1] - Janeiro\n[2] - Fevereiro\n[3] - Março\n[4] - Abril\n[5] - Maio\n[6] - Junho\n[7] - Julho\n[8] - Agosto\n");
	printf("[9] - Setembro\n[10] - Outubro\n[11] - Novembro\n[12] - Dezembro\n\n");
	fflush(stdin);
	scanf("%i", &mes);
	
	mes = mes -1;
	
	switch(mes){
		case janeiro:
			printf("Mês de Janeiro");
			break;
			
		case fevereiro:
			printf("Mês de Fevereiro");
			break;
			
		case marco:
			printf("Mês de Março");
			break;
			
		case abril:
			printf("Mês de Abril");
			break;
			
		case maio:
			printf("Mês de Maio");
			break;
			
		case junho:
			printf("Mês de Junho");
			break;
			
		case julho:
			printf("Mês de Julho");
			break;
			
		case agosto:
			printf("Mês de Agosto");
			break;
			
		case setembro:
			printf("Mês de Setembro");
			break;
			
		case outubro:
			printf("Mês de Outubro");
			break;
			
		case novembro:
			printf("Mês de Novembro");
			break;
			
		case dezembro:
			printf("Mês de Dezembro");
			break;
			
		default:
			printf("Inválido");		
	}
	
	return 0;
}
