#include <stdio.h>
#include <stdlib.h>

	int linhaDisciplinas, colunaDisciplinas, linhaNotas, colunaNotas;
	char matrizDisciplinas[1][5][30];
	float matrizNotas[5][2];

int main() {
	
	// cadastro das disciplinas
	printf("\n\nPreencha as informações: \n\n");
	for (linhaDisciplinas = 1; linhaDisciplinas <= 1; linhaDisciplinas++) {
		for (colunaDisciplinas = 1; colunaDisciplinas <= 5; colunaDisciplinas++) {
			printf("Disciplina %i: ", colunaDisciplinas);	
			fflush(stdin);
			gets(matrizDisciplinas[linhaDisciplinas][colunaDisciplinas]);
		}
		printf("\n\n");
	}
	
	system("cls");
	
	// cadastro das notas
	printf("\nPreencha as notas: \n\n");
	for (colunaNotas = 1; colunaNotas <= 5; colunaNotas++) {
		printf("Disciplina: %s\n", matrizDisciplinas[linhaDisciplinas][colunaDisciplinas]);
		for (linhaNotas = 1; linhaNotas <= 2; linhaNotas++) {
			printf("%i Nota: ", linhaNotas);	
			scanf("%f", &matrizNotas[colunaNotas][linhaNotas]);
		}
		printf("\n\n");
	}

//	printf("\n\nResultadoss: \n\n");
//	for (linhaDisciplinas = 1; linhaDisciplinas <= 2; linhaDisciplinas++) {
//		for (colunaDisciplinas = 1; colunaDisciplinas <= 5; colunaDisciplinas++) {
//			printf("\t%s\t: ", matrizDisciplinas[linhaDisciplinas][colunaDisciplinas]);
//		}
//	}
	
		
	return 0;
}
