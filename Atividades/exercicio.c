#include<stdio.h>
#include<locale.h>

char nome[50];
char matricula[10];
float p1, p2, p3;

main(void){
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Nome: ");
	scanf("%s", &nome);
	
	printf("Matr�cula: ");
	scanf("%s", &matricula);
	
	printf("Nota 1: ");
	scanf("%f", &p1);
	
	printf("Nota 2: ");
	scanf("%f", &p2);
	
	printf("Nota 2: ");
	scanf("%f", &p3);
	
	printf("Cadastrado: %s\n", nome);
	printf("Matr�cula: $s\n", matricula);
	printf("Nota 1: %f\n", p1);
	printf("Nota 2: %f\n", p2);
	printf("Nota 3: %f\n", p3);
	
}
