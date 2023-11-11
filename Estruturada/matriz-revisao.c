#include <stdio.h>
#include <stdlib.h>

	int linha1, coluna1, linha2, coluna2;
	float matriz1[2][4];
	char matriz2[3][2][30];

int main() {
	
	//PRIMEIRA
	
	printf("\tDigite os valores da matriz\n\n");
	for (linha1 = 1; linha1 <= 2; linha1++){
		for (coluna1 = 1; coluna1 <= 4; coluna1++){
			printf("Linha %i Coluna %i: ", linha1, coluna1);
			fflush(stdin);
			scanf("%f", &matriz1[linha1][coluna1]);
		}
	}
	
	system("cls");
	printf("\n\n");
	for (linha2 = 1; linha2 <= 2; linha2++){
		for (coluna2 = 1; coluna2 <= 4; coluna2++){
			printf("|\t%.1f\t|", matriz2[linha2][coluna2]);
		}
	printf("\n\n");
	}
	printf("\n\n");
	system("pause");
	
	// SEGUNDA
	
	system("cls");
	printf("\tDigite os valores da matriz\n\n");
	for (linha2 = 1; linha2 <= 3; linha2++){
		for (coluna2 = 1; coluna2 <= 2; coluna2++){
			printf("Linha %i Coluna %i: ", linha2, coluna2);
			fflush(stdin);
			gets(matriz2[linha2][coluna2]);
		}
	}
	
	system("cls");
	printf("\n\n");
	for (linha2 = 1; linha2 <= 3; linha2++){
		for (coluna2 = 1; coluna2 <= 2; coluna2++){
			printf("|\t%s\t|", matriz2[linha2][coluna2]);
		}
	printf("\n\n");
	}
	
	return 0;
}
