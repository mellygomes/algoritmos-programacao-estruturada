#include <stdio.h>

struct ficha_de_estudante {
	char nome[30], disciplina[30];
	float P1, P2, media;	
};

int main() {
	printf("\n\n");
	
	printf("\t\tCADASTRO DA FIXA DE ESTUDANTE\n\n");
	
	struct ficha_de_estudante aluno1, aluno2;
	printf("Nome: ");
	fflush(stdin);
	gets(aluno1.nome);
	
	printf("Discipina: ");
	fflush(stdin);
	gets(aluno1.disciplina);
	
	printf("\nNotas\n\n");
	
	printf("Prova 1: ");
	fflush(stdin);
	scanf("%f", &aluno1.P1);
	
	printf("Prova 2: ");
	fflush(stdin);
	scanf("%f", &aluno1.P2);
	system("cls");
	
	//MEDIA
	
	aluno1.media = (aluno1.P1 + aluno1.P2) / 2;
	
	printf("\n\nRESULTADO\n\n");
	
	printf("Nome: %s\n", aluno1.nome);
	printf("Disciplina: %s\n", aluno1.disciplina);
	printf("Nota 1: %.1f|| Nota 2: %.1f\n", aluno1.P1, aluno1.P2);
	printf("Média final: %.1f\n\n", aluno1.media);
	system("pause");
	
	// ---------------------------------------------------------------------------
	system("cls");
	
	printf("Nome: ");
	fflush(stdin);
	gets(aluno2.nome);
	
	printf("Discipina: ");
	fflush(stdin);
	gets(aluno2.disciplina);
	
	printf("\nNotas\n\n");
	
	printf("Prova 1: ");
	fflush(stdin);
	scanf("%f", &aluno2.P1);
	
	printf("Prova 2: ");
	fflush(stdin);
	scanf("%f", &aluno2.P2);
	system("cls");
	
	//MEDIA
	
	aluno2.media = (aluno2.P1 + aluno2.P2) / 2;
	
	printf("\n\nRESULTADO\n\n");
	
	printf("Nome: %s\n", aluno2.nome);
	printf("Disciplina: %s\n", aluno2.disciplina);
	printf("Nota 1: %.1f|| Nota 2: %.1f\n", aluno2.P1, aluno2.P2);
	printf("Média final: %.1f", aluno2.media);
	
	return 0;
}
