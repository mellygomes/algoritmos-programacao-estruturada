#include <stdio.h>
#include <stdlib.h>

	int linhaD, colunaD, linhaN, colunaN, linhaM, colunaM;
	char matrizDisciplinas[1][5][30];
	float matrizNotas[1][5], matrizMedias[1][5];

int main(void) {
	
	int i = 1;
	for (linhaD = 1; linhaD <= 5; linhaD++) {
		printf("Disciplina %i: ", i);
		fflush(stdin);
		gets(matrizDisciplinas[linhaD][colunaD]);
		i++;
	}
	return 0;
}

/*	 ___________________________________________________________________________________________________
	{Engen. Software | Mat. Discreta | Alg. P. Estr. | Sist. Comput. | R.P. e Valores | Alg. P. Estr.	}
	{		9				8				7				6				5				4			}
	{		9				8				7				6				5				4			}
	{		9				8				7				6				5				4			}
	{___________________________________________________________________________________________________}
*/
