#include<stdio.h>
#include<locale.h>
#include<string.h>

enum Ano {janeiro, fevereiro, marco, abril, maio, junho, julho, agosto, setembro, outubro, novembro, dezembro};
int mes;

main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	enum Ano mes;
	printf("Escolha um m�s:\n\n[1] - Janeiro\n[2] - Fevereiro\n[3] - Mar�o\n[4] - Abril\n[5] - Maio\n[6] - Junho\n[7] - Julho\n[8] - Agosto\n");
	printf("[9] - Setembro\n[10] - Outubro\n[11] - Novembro\n[12] - Dezembro\n\n");
	fflush(stdin);
	scanf("%i", &mes);
	
	mes = mes -1;
	
	switch(mes){
		case janeiro:
			printf("M�s de Janeiro");
			break;
			
		case fevereiro:
			printf("M�s de Fevereiro");
			break;
			
		case marco:
			printf("M�s de Mar�o");
			break;
			
		case abril:
			printf("M�s de Abril");
			break;
			
		case maio:
			printf("M�s de Maio");
			break;
			
		case junho:
			printf("M�s de Junho");
			break;
			
		case julho:
			printf("M�s de Julho");
			break;
			
		case agosto:
			printf("M�s de Agosto");
			break;
			
		case setembro:
			printf("M�s de Setembro");
			break;
			
		case outubro:
			printf("M�s de Outubro");
			break;
			
		case novembro:
			printf("M�s de Novembro");
			break;
			
		case dezembro:
			printf("M�s de Dezembro");
			break;
			
		default:
			printf("Inv�lido");		
	}
	
	return 0;
}
