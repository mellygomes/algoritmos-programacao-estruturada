#include <stdio.h>

char nome[50];
int idade;
float salario;

main(void){
	
	printf("Digite o nome: ");
	scanf("%s", &nome);
	
	printf("Digite a idade: ");
	scanf("%i", &idade);
	
	printf("Digite o sal�rio: ");
	scanf("%f", &salario);
	
	printf("Nome: %s - Idade: %i - Sal�rio: %f", nome, idade, salario);		
}
