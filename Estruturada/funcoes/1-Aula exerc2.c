// CODIGO DO PROFESSOR

#include <stdio.h>

float n1, n2, med;

void cadastro(){
	
    do{
    	printf("Dig nota 1: ");
        scanf("%f", &n1);
        
        if (n1 < 0.0 || n1 > 10.0) {
		printf("Invalido!\n");
		}
		
    } while (n1 < 0.0 || n1 > 10.0);
    
    do{
    	printf("\nDig nota 2: ");
        scanf("%f", &n2);
        
        if (n2 < 0.0 || n2 > 10.0) {
        printf("Invalido!\n"); 
    	}	
    } while (n2 < 0.0 || n2 > 10.0);
    
    med = (n1 + n2) / 2;
}

void exibe_resultado(){
	
	printf("Nota1 = %.2f\nNota2 = %.2f\n Media %.1f: ", n1, n2, med);
	
    if (med < 3.0) {
        printf("Aluno reprovado!\n");
    } else if (med >= 3.0 && med < 7.0) {
        printf("Aluno em exame!\n");
    } else if (med >= 7.0) {
        printf("Aluno aprovado!\n");
}

int main(){
    cadastro();
    sleep(2); // pausa o programa por um periodo (2 segundos)
    exibe_resultado(med);
    system("pause");
    return 0;
}


