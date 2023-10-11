#include <stdio.h>
#include <locale.h>
#include <string.h>

	float n1[3], n2[3], media[3];
	char nome[3][50], resultado[3][30];
	int option[3];

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n\n                                === NOTAS ===\n\n");
	
	int i = 1;
	do {
		
		printf("|	Nome: ");
		fflush(stdin);
		gets(nome[i]);
		
		printf("|	Primeira nota: ");
		fflush(stdin);
		scanf("%f", &n1[i]);
		
		printf("|	Segunda nota: ");
		fflush(stdin);
		scanf("%f", &n2[i]);
		
		media[i] = (n1[i] + n2[i]) / 2;

		i++;
		printf("-------------------------------------------------\n\n");
	
	} while (i <= 3);
	
	system("cls");
	
	// ---------------------------------------- IMPRESS�O
	
	i = 1;
		printf("-------------------------------------------------\n");
	do {
		
		printf("|	Cadastro N� %i\n", i);
		printf("|	\n");
		printf("|	Aluno(a): %s\n", nome[i]);
		
	 // ---------------------------------------- CONDI��O
	
		if ((media[i] >= 9) && (media[i] <= 10)) {
			
			printf("|	M�dia: %.2f\n", media[i]);
			printf("|	Resultado final: Aprovado\n");
			printf("|		\n");
			
			printf("|	Voc� pode escolher uma viagem!\n");
			printf("|	\n");
			printf("|	[1 - Salvador]\n|	[2 - Curitiba]\n|	[3 - Bras�lia]\n");
			printf("|	\n");
			
			printf("|	Informe o c�digo referente a viagem que deseja: ");
			fflush(stdin);
			scanf("%i", &option[i]);
			printf("|	\n");
						
			switch (option[i]) {
				
				case 1:
				printf("|	A viagem escolhida foi para Salvador!\n");
				printf("|	\n");
				break;
				
				case 2:
				printf("|	A viagem escolhida foi para Curitiba!\n");
				printf("|	\n");
				break;
				
				case 3:
				printf("|	A viagem escolhida foi para Bras�lia!\n");
				printf("|	\n");
				break;
			}
				
		} else if ((media[i] >= 7) && (media[i] <= 10)) {
				
			printf("|	M�dia: %.2f\n", media[i]);
			printf("|	Resultado final: Aprovado\n");
			printf("|	\n");

					
		} else if ((media[i] < 7) && (media[i] > 0)) {
			
			printf("|	M�dia: %.2f\n", media[i]);	
			printf("|	Resultado final: Reprovado\n");
			printf("|	\n");

		} else {
			
			printf("|	[!] - Valores inv�lidos nas notas.\n");
			printf("|	\n");
			
		}
				
		printf("-------------------------------------------------\n");
		i++;
		
	} while (i <= 3);
	
	printf("\n\n\n\n\n\n");
	return 0;
}
