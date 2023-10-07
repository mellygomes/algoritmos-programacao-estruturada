#include<stdio.h>
#include<locale.h>

char setor_letra, setor[15], nome[20];

main(void){
	
	//cadastro
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite a 1ª letra do setor: ");
	fflush(stdin);
	scanf("%c", &setor_letra);
	
	printf("Digite o nome do setor: ");
	fflush(stdin);
	scanf("%s", &setor);
	
	printf("Digite o nome completo do cliente: ");
	fflush(stdin);
    gets(nome);
	
	//impressão
	
	printf("Primeira letra: %c\nSetor: %s", setor_letra, setor);
	printf("Nome: %s", nome);
	
	system("pause");
	return 0;
}
