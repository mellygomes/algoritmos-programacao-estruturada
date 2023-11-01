#include <stdio.h>
#include <string.h>
#include <ctype.h>

	char nomeCompleto[100], endereco[100], nomeDoutor[100], motivoConsulta[100], confirma[3];
	int idade, i;
	
int main() {
	
	do {
		
		printf("\n\n		ATESTADO\n\n");
		
		printf("preencha as informações\n\n");
		printf("Nome completo: ");
		fflush(stdin);
		gets(nomeCompleto);
		
		printf("Idade: ");
		fflush(stdin);
		scanf("%d%*[\n]", &idade);
		
		printf("Endereço: ");
		fflush(stdin);
		gets(endereco);
		
		printf("Motivo da consulta: ");
		fflush(stdin);
		gets(motivoConsulta);
		
		printf("Doutor responsável: ");
		fflush(stdin);
		gets(nomeDoutor);
		
		for (i = 0; nomeCompleto[i]; i++) {
			nomeCompleto[i] = toupper(nomeCompleto[i]);
		}
		
		// impressao
		printf("		\n\nAtestado gerado\n\n");
		
		printf("O(A) estudante %s residente no\n", nomeCompleto);
		printf("End.: %s compareceu na UPA 00, para uma consulta de %s\n", endereco, motivoConsulta);
		printf("Estudante possui %d anos\n\n", idade);
		
		printf("		%s\n", nomeDoutor);
		printf("			Dr.ª\n\n");
		
		printf("Deseja fazer outro cadastro? [s] ou [n]");
		fflush(stdin);
		gets(confirma);
		
		for (i = 0; nomeCompleto[i]; i++) {
		confirma[i] = tolower(confirma[i]);
		}
		
	} while ((confirma == "s") || (confirma == "sim")); 	
	
	return 0;
}
