#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

  char nome1[3][50], nome2[3][50];
  int i, idade1[3], idade2[3], idadeSoma[3];

int main(){

  setlocale(LC_ALL, "Portuguese");

  for (i = 1; i <= 2; i++){

    printf("%i pessoa", i);
  
    printf("\nInforme o nome: ");
    fflush(stdin);
    fgets(nome1[i], 50, stdin);
    
    printf("\nInforme a idade: ");
    fflush(stdin);
    scanf("%i", &idade1[i]);

    printf("%i pessoa", i);

    printf("\n\nInforme o nome: ");
    fflush(stdin);
    fgets(nome2[i], 50, stdin);
    
    printf("\nInforme a idade: ");
    fflush(stdin);
    scanf("%i", &idade2[i]);
    printf("\n--------------------------\n\n");
    
    idadeSoma[i] = idade1[i] + idade2[i];
    
  }
  
  system("cls");

  for (i = 1; i <= 2; i++){
  
    printf("\n\nAs idade de %s e %s somadas é igual a: %i", nome1[i], nome2[i], idadeSoma[i]);
        
  }

  return 0;
}
