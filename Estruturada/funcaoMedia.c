#include <stdio.h>

float mediaNotas (float prova1,float prova2,float notaTrabalho){ //função mediaNotas

	float notaParcial, notaFinal;

	printf("\n Inicio da funcao mediaNotas\n");
	getchar();
	printf("prova1 = %f prova2 = %f trab = %f\n",prova1,prova2,notaTrabalho);
	getchar();
	notaParcial = (prova1 + prova2) / 2;
	notaFinal = (notaParcial * 0.7) + (notaTrabalho * 0.3);
	printf("Fim da funcao mediaNotas\n");
	getchar();

	return notaFinal;
}

int main() {

	float nota1, nota2, notaTrabalho, mediaFinal;
	
	printf("Informe a nota da primeira prova: ");
	fflush(stdin);
	scanf("%f", &nota1);
	
	printf("Informe a nota da segunda prova: ");
	fflush(stdin);
	scanf("%f", &nota2);
	
	printf("Informe a nota do trabalho: ");
	fflush(stdin);
	scanf("%f", &notaTrabalho);

	return 0;	
}
