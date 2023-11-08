#include <stdio.h>
#include <stdlib.h>

int linha, coluna;
char matriz[3][3][20];

int main() {
	
	//GRAVACAO
	printf("\n\n");
	int i = 1;
	for(linha = 1; linha <= 3; linha++) {
		for (coluna =1; coluna <= 3; coluna++) {
			printf("Digite %i palavra: ", i);
			fflush(stdin);
			gets(matriz[linha][coluna]);
			i++;
		}	
	}
	
	system("cls");
	printf("\n\n");
	for(linha = 1; linha <= 3; linha++) {
		for (coluna =1; coluna <= 3; coluna++) {
			printf("\t\t%s", matriz[linha][coluna]);
		}
		printf("\n\n");
		printf("\n\n");
	}
	
	return 0;
}
