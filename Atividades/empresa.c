#include<stdin>
#include<locale>
#include<string>

char end, empNome;
int ddd, tel[2];

main(void){
	
	setlocale(LC_ALL, "portuguese");
	
	//CADASTRO
	
	printf("=========== 	SISTEMA DE EMPRESA ============");
	prinf("\n");
	
	printf("Nome da empresa: ");
	fflush(stdin);
	gets(empNome);
	
	printf("Endere�o: ");
	fflush(stdin);
	gets(end);
	
	printf("Telefone: ");
	fflush(stdin);
	gets(ddd);
	
	//IMPRESS�O
	
	printf("Empresa: %s\n", empNome);
	printf("Telefone: %i");
	
}
