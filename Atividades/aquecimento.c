#include<stdio.h>
#include<locale.h>

char setor, nomeS[50], ben1[50], ben2[50];
int tempo;
float v1, v2, total;

main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	//cadastro
	
	printf("CADASTRO");
	printf("\n");
	
	printf("Digite o nome completo do setor: ");
	gets(nomeS);
	fflush(stdin);
	printf("\n");
	
	printf("Digite o c�digo do setor: ");
	scanf("%c", &setor);
	fflush(stdin);
	printf("[A] - Adiministrativo\n");
	printf("[B] - Contabilidade\n");
	printf("[C] - Inform�tica");
	printf("\n");
	
	system("cls");

	printf("Quantos anos dentro da empresa?");
	scanf("%i", &tempo);
	fflush(stdin);
	printf("\n");
	
	printf("Qual o 1� benef�cio?");
	fflush(stdin);
	gets(ben1);
	
	printf("Valor: ");
	scanf("%f", v1);
	fflush(stdin);
	
	printf("Qual o 2� benef�cio?");
	gets(ben2);
	fflush(stdin);
	printf("\n");
	
	printf("Valor: ");
	scanf("%f", v2);
	fflush(stdin);
	
	total = v1 + v2;
	
	system("cls");
	
	printf("CADASTRADO:");
	printsf("\n");
	
	Printf("Setor: %s", nomeS);
	printf("C�d. do setor: %c", setor);
	printf("Anos na empresa: %i", tempo);
	printf("1� Benef�cio: %s", ben1);
	printf("Valor do 1� Benef�cio: %f", v1);
	printf("2� Benef�cio: %s", ben2);
	printf("Valor do 2� Benef�cio: %f", v2);
	printf("Total para receber: ", total);
	
	return 0;	
}
