#include <stdio.h>
#include <locale.h>

	float n1, n2, media;
	void receberNotas();

	
	void validarValor() {
		
		if ((n1 < 0) || (n1 > 10) || (n2 < 0) || (n2 > 10)) {
			
			printf("\n---------------------\n");
			printf("Valor inválido, insira novamente!\n\n");
			receberNotas();
		}	
	}
	
	void receberNotas() { //recebe as notas e calcula a media
		
		printf("1° Nota: ");
		fflush(stdin);
		scanf("%f", &n1);
		validarValor();
		
		printf("2° Nota: ");
		fflush(stdin);
		scanf("%f", &n2);
		validarValor();

		media = (n1 + n2) / 2;
	}
	
	void imprimir() {
		
		system("cls");
		printf("\n\n");
		printf("1° Nota: %.2f\n", n1);
		printf("2° Nota: %.2f\n", n2);
		printf("Média final: %.2f\n", media);
	}

int main() {
	
	printf("\n\n");
	setlocale(LC_ALL, "Portuguese");
	
	receberNotas();
	imprimir();
	
	printf("\n\n");
	return 0;
}

