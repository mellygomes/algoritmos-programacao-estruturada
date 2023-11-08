#include <stdio.h>
#include <stdlib.h>

	int linha, coluna;
	int matriz[3][3];
	
int main(){
	
	//CADASTRO
	for (linha=1; linha<=3; linha++) {
		
		for (coluna=1; coluna<=3; coluna++) {
			printf("Linha %d Coluna %d = ", linha, coluna);
			scanf("%d", &matriz[linha][coluna]);
		}
	}
	
	system("cls");
	
	//IMPRESSAO
	for (linha=1; linha<=3; linha++) {
		
		printf("\n\n");
		for (coluna=0; coluna<3; coluna++) {
			printf("\t%d\t", matriz[linha][coluna]);
		}
		printf("\n\n");
	}
	
	return 0;
	
}
