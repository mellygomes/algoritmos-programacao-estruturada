#include <stdio.h>

int matriz[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
/* 
Assim é declarado uma matriz, demonstrando que há colunas e linhas com 5 espacos
Exemplo:

{1, 2, 3}
{4, 5, 6}
{7, 8, 9}

*/

int main(void){
	//linha e coluna
	printf("\n\n");
	printf("\t{%i\t", 	matriz[0][0]);
	printf("%i\t", 		matriz[0][1]);
	printf("%i}\t\n\n", matriz[0][2]);
	printf("\t{%i\t", 	matriz[1][0]);
	printf("%i\t", 		matriz[1][1]);
	printf("%i}\t\n\n", matriz[1][2]);
	printf("\t{%i\t", 	matriz[2][0]);
	printf("%i\t", 		matriz[2][1]);
	printf("%i}\t", 	matriz[2][2]);
	printf("\n\n");

		
	return 0;
}
