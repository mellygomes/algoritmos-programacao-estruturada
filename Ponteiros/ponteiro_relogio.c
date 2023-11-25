#include<stdio.h>

int main(void){
	struct horario{
		int hora;
		int minuto;
		int segundo;
	};
	
	struct horario agora, *ponteiro_agora;
	// A estrutura 'agora' recebe os valores
	agora.hora = 20;
	agora.minuto = 20;
	agora.segundo = 20;
	
	// O ponteiro 'ponteiro_agora' recebe as informações da estrutura 'agora'
	ponteiro_agora = &agora;
	
	// Imprime os valores através do ponteiro_agora
	printf("%ih %imin %iseg", ponteiro_agora->hora, ponteiro_agora->minuto, ponteiro_agora->segundo);
	
	return 0;
}
