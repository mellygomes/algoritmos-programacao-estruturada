#include<stdio.h>

int main(){
	// Estrutura que define a estrutura hor�rio com tr�s campos: hora, minuto e segundo
	struct horario{
		int hora;
		int minuto;
		int segundo;
	};
	
	struct horario agora, *depois; // Cria uma vari�vel �agora� do tipo struct horario e um ponteiro depois para o tipo struct horario
	depois = &agora; // Inicializa o ponteiro �depois� para apontar para a vari�vel agora
	// Acessa os campos da estrutura atrav�s do ponteiro usando a nota��o de seta (->) ou a nota��o de desreferenciamento ((*depois).campo)
	(*depois).hora = 10; // ou depois -> hora = 20;
	(*depois).minuto = 15; // depois -> minuto = 20;
	(*depois).segundo = 20; //depois -> segundo = 20;
	
	printf("%ih %imin %iseg", agora.hora, agora.minuto, agora.segundo); // Imprime o hor�rio armazenado na vari�vel �agora�
	sleep(1);
	system("cls");
	
	depois = &agora; 
	(*depois).hora = 10; 
	(*depois).minuto = 15; 
	(*depois).segundo = 21;
	printf("%ih %imin %iseg", agora.hora, agora.minuto, agora.segundo);
	
	sleep(1);
	system("cls");
	
	depois = &agora; 
	(*depois).hora = 10; 
	(*depois).minuto = 15; 
	(*depois).segundo = 22;
	printf("%ih %imin %iseg", agora.hora, agora.minuto, agora.segundo);
	
	sleep(1);
	system("cls");
	
	depois = &agora; 
	(*depois).hora = 10; 
	(*depois).minuto = 15; 
	(*depois).segundo = 23;
	printf("%ih %imin %iseg", agora.hora, agora.minuto, agora.segundo);
	
	sleep(1);
	system("cls");
	
	depois = &agora; 
	(*depois).hora = 10; 
	(*depois).minuto = 15; 
	(*depois).segundo = 24;
	printf("%ih %imin %iseg", agora.hora, agora.minuto, agora.segundo);
	
	sleep(1);
	system("cls");
	
	depois = &agora; 
	(*depois).hora = 10; 
	(*depois).minuto = 15; 
	(*depois).segundo = 25;
	printf("%ih %imin %iseg", agora.hora, agora.minuto, agora.segundo);
	
	sleep(1);
	system("cls");
	
	return 0;
}

